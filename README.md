# tabs_player
A simple OpenAL sound synthesiser/tabs player

## Usage
You can play a tabs file by passing it as an argument to the tabs_player program.
```
./tabs_player my_tabs_file.txt
```

A tabs file is a sequence of **b**reaks, **n**otes or **c**hords, one per line.
```
# A line beginning with a '#' will be ignored
# b 1.0 is a break or pause lasting 1 second
# n E6 0.5 is the single note E6 that will be played for half a second (see notes.h for a list of defined notes)
# c Em 0.3 is the chord E minor that will be played for 0.3 seconds (see notes.h for a list of defined chords)
```
You can extend the list of defined notes and chords by modifying *notes.h*. A note is defined as:
```
float my_note = 440.0f; //frequency in hertz;
```
A chord is defined as a *vector* of floats or predifined notes:
```
std::vector<float> my_chord = { E4, B3, G3s, E3, B2, E2 }; //E major chord
```
You will also have to add your note/chord to the *[note,chord]_map* in the *notes.h* file.

## Dependencies

* [OpenAL](https://www.openal.org/downloads/)
* [freealut](https://github.com/vancegroup/freealut)

## Building the program
* **Windows**
	1. Generate the makefiles or project files using `cmake`:

	`cmake -G` to get the list of available generators

	`cmake -G "generator_name" -DINCLUDE_PATH="path/to/include" -DLIBRARY_PATH="path/to/lib" .`

	Alternatively you can use a graphical tool like **CMake GUI**

	2. Use `make` or open the project file in the appropriate IDE to build the project


* **Linux**
	1. Generate the makefiles using `cmake`:

	`cmake .`

	Alternatively you can use a graphical tool like **CMake GUI**

	2. Build the project using `make`
