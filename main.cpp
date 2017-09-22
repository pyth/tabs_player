#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
#include <vector>
#include <string>

#ifdef __linux__
	#include <AL/al.h>
	#include <AL/alut.h>
#elif WIN32
	#include <al.h>
	#include <alut.h>
#endif

#include "notes.h"

static void play(std::vector<ALfloat>& freq, ALfloat duration) {
	if(freq.size() == 0) {
		std::this_thread::sleep_for(std::chrono::duration<float>(duration));
		return;
	}

	std::vector<ALuint> buf(freq.size());

	std::vector<ALuint> sources(freq.size());
	alGenSources(sources.size(), sources.data());

	for(unsigned int i = 0; i < freq.size(); i++) {
		buf[i] = alutCreateBufferWaveform(ALUT_WAVEFORM_SINE, freq[i], 0, duration);
		alSourcef(sources[i], AL_PITCH, 1.0);
		alSourcef(sources[i], AL_GAIN, 1.0f / 3);
		alSourcei(sources[i], AL_LOOPING, 0);
		alSource3f(sources[i], AL_POSITION, 0, 0, 0);
		alSource3f(sources[i], AL_VELOCITY, 0, 0, 0);
		alSourcei(sources[i], AL_BUFFER, buf[i]);
	}

	alSourcePlayv(freq.size(), sources.data());

	std::this_thread::sleep_for(std::chrono::duration<float>(duration + 0.05f));

	alSourceStop(sources[0]);

	alDeleteSources(freq.size(), sources.data());
	alDeleteBuffers(freq.size(), buf.data());
}

int main(int argc, char **argv) {
	if(argc != 2)
		return -1;

	alutInit(&argc, argv);

	ALfloat ori[] = {0, 0, 1, 0, 1, 0};
	alListener3f(AL_POSITION, 0, 0, 0);
	alListener3f(AL_VELOCITY, 0, 0, 0);
	alListenerfv(AL_ORIENTATION, ori);

	std::ifstream file(argv[1], std::ifstream::in);

	size_t index1;
	size_t index2;
	std::string line;

	while(!file.eof()) {
		std::getline(file, line);
		if(line[0] == '#')
			continue;

		guitar_chord chord;
		int line_type;
		index1 = 0;
		index2 = 0;

		while(index2 != std::string::npos) {
			index2 = line.find(" ", index1);
			if(index2 != std::string::npos) {
				std::string s = line.substr(index1, index2 - index1);
				if(index1 == 0) {
					if (s == "b")
						line_type = 0;
					else if(s == "n")
						line_type = 1;
					else if(s == "c")
						line_type = 2;
				} else {
					if(line_type == 0) {
						chord.notes = {};
					} else if(line_type == 1) {
						chord.notes.push_back(note_map[s]);
					} else {
						chord.notes = chord_map[s];
					}
				}
				index1 = index2 + 1;
			} else if(index1 != 0) {
				std::string s = line.substr(index1);
				chord.duration = std::atof(s.c_str());
			}
		}
		play(chord.notes, chord.duration);
	}

	file.close();

	alutExit();
	return 0;
}
