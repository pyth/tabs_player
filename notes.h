#ifndef __NOTES_H__
#define __NOTES_H__

#include <map>
#include <vector>

float C0 = 16.35f;
float C0s = 17.32f;
float D0 = 18.35f;
float D0s = 19.45f;
float E0 = 20.60f;
float F0 = 21.83f;
float F0s = 23.12f;
float G0 = 24.50f;
float G0s = 25.96f;
float A0 = 27.50f;
float A0s = 29.14f;
float B0 = 30.87f;

float C1 = C0 * 2;
float C1s = C0s * 2;
float D1 = D0 * 2;
float D1s = D0s * 2;
float E1 = E0 * 2;
float F1 = F0 * 2;
float F1s = F0s * 2;
float G1 = G0 * 2;
float G1s = G0s * 2;
float A1 = A0 * 2;
float A1s = A0s * 2;
float B1 = B0 * 2;

float C2 = C1 * 2;
float C2s = C1s * 2;
float D2 = D1 * 2;
float D2s = D1s * 2;
float E2 = E1 * 2;
float F2 = F1 * 2;
float F2s = F1s * 2;
float G2 = G1 * 2;
float G2s = G1s * 2;
float A2 = A1 * 2;
float A2s = A1s * 2;
float B2 = B1 * 2;

float C3 = C2 * 2;
float C3s = C2s * 2;
float D3 = D2 * 2;
float D3s = D2s * 2;
float E3 = E2 * 2;
float F3 = F2 * 2;
float F3s = F2s * 2;
float G3 = G2 * 2;
float G3s = G2s * 2;
float A3 = A2 * 2;
float A3s = A2s * 2;
float B3 = B2 * 2;

float C4 = C3 * 2;
float C4s = C3s * 2;
float D4 = D3 * 2;
float D4s = D3s * 2;
float E4 = E3 * 2;
float F4 = F3 * 2;
float F4s = F3s * 2;
float G4 = G3 * 2;
float G4s = G3s * 2;
float A4 = A3 * 2;
float A4s = A3s * 2;
float B4 = B3 * 2;

float C5 = C4 * 2;
float C5s = C4s * 2;
float D5 = D4 * 2;
float D5s = D4s * 2;
float E5 = E4 * 2;
float F5 = F4 * 2;
float F5s = F4s * 2;
float G5 = G4 * 2;
float G5s = G4s * 2;
float A5 = A4 * 2;
float A5s = A4s * 2;
float B5 = B4 * 2;

float C6 = C5 * 2;
float C6s = C5s * 2;
float D6 = D5 * 2;
float D6s = D5s * 2;
float E6 = E5 * 2;
float F6 = F5 * 2;
float F6s = F5s * 2;
float G6 = G5 * 2;
float G6s = G5s * 2;
float A6 = A5 * 2;
float A6s = A5s * 2;
float B6 = B5 * 2;

float C7 = C6 * 2;
float C7s = C6s * 2;
float D7 = D6 * 2;
float D7s = D6s * 2;
float E7 = E6 * 2;
float F7 = F6 * 2;
float F7s = F6s * 2;
float G7 = G6 * 2;
float G7s = G6s * 2;
float A7 = A6 * 2;
float A7s = A6s * 2;
float B7 = B6 * 2;

float C8 = C7 * 2;
float C8s = C7s * 2;
float D8 = D7 * 2;
float D8s = D7s * 2;
float E8 = E7 * 2;
float F8 = F7 * 2;
float F8s = F7s * 2;
float G8 = G7 * 2;
float G8s = G7s * 2;
float A8 = A7 * 2;
float A8s = A7s * 2;
float B8 = B7 * 2;

// E4|F4  - F4s - G4  - G4s - A4 - A4s - B4  - C5  - C5s - D5 - D5s||E5 - F5  - F5s - G5  - G5s - A5 - A5s - B5  - C6  - C6s - D6 - D6s - E6
// B3|C4  - C4s - D4  - D4s - E4 - F4  - F4s - G4  - G4s - A4 - A4s||B4 - C5  - C5s - D5  - D5s - E5 - F5  - F5s - G5  - G5s - A5 - A5s - B5
// G3|G3s - A3  - A3s - B3  - C4 - C4s - D4  - D4s - E4  - F4 - F4s||G4 - G4s - A4  - A4s - B4  - C5 - C5s - D5  - D5s - E5  - F5 - F5s - G5
// D3|D3s - E3  - F3  - F3s - G3 - G3s - A3  - A3s - B3  - C4 - C4s||D4 - D4s - E4  - F4  - F4s - G4 - G4s - A4  - A4s - B4  - C5 - C5s - D5
// A2|A2s - B2  - C3  - C3s - D3 - D3s - E3  - F3  - F3s - G3 - G3s||A3 - A3s - B3  - C4  - C4s - D4 - D4s - E4  - F4  - F4s - G4 - G4s - A4
// E2|F2  - F2s - G2  - G2s - A2 - A2s - B2  - C3  - C3s - D3 - D3s||E3 - F3  - F3s - G3  - G3s - A3 - A3s - B3  - C4  - C4s - D4 - D4s - E4

std::vector<float> A = { E4, C4s, A3, E3, A2 };
std::vector<float> Am = { E4, C4, A3, E3, A2 };
std::vector<float> A_7 = { E4, C4s, G3, E3, A2 };

std::vector<float> B = { F4s, D4s, B3, F3s, B2 };
std::vector<float> Bm = { F4s, D4, B3, F3s, B2 };
std::vector<float> B_7 = { F4s, B3, A3, D3s, B2 };

std::vector<float> C = { E4, C4, G3, E3, C3, G2 };
std::vector<float> Cm = { F4, C4s, A3s, F3, A2s };
std::vector<float> C_7 = { E4, C4, A3s, E3, C3 };

std::vector<float> D = { F4s, D4, A3, D3 };
std::vector<float> Dm = { F4, D4, A3, D3 };
std::vector<float> D_7 = { F4s, C4, A3, D3 };

std::vector<float> E = { E4, B3, G3s, E3, B2, E2 };
std::vector<float> Em = { E4, B3, G3, E3, B2, E2 };
std::vector<float> E_7 = { E4, D4, G3s, E3, B2, E2 };

std::vector<float> F = { F4, C3, A3, F3, C3, F2 };
std::vector<float> Fm = { F4, C3, G3s, F3, C3, F2 };
std::vector<float> F_7 = { F4, C4, A3, D3s, C3, F2 };

std::vector<float> G = { G4, B3, G3, D3, B2, G2 };
std::vector<float> Gm = { F4, C4, G3s, F3, C3, F2 };
std::vector<float> G_7 = { F4, B3, G3, D3, B2, G2 };

std::map<std::string, float> note_map = {
	{"C0", C0}, {"C0s", C0s}, {"D0", D0}, {"D0s", D0s}, {"E0", E0}, {"F0", F0}, {"F0s", F0s}, {"G0", G0}, {"G0s", G0s}, {"A0", A0}, {"A0s", A0s}, {"B0", B0},
	{"C1", C1}, {"C1s", C1s}, {"D1", D1}, {"D1s", D1s}, {"E1", E1}, {"F1", F1}, {"F1s", F1s}, {"G1", G1}, {"G1s", G1s}, {"A1", A1}, {"A1s", A1s}, {"B1", B1},
	{"C2", C2}, {"C2s", C2s}, {"D2", D2}, {"D2s", D2s}, {"E2", E2}, {"F2", F2}, {"F2s", F2s}, {"G2", G2}, {"G2s", G2s}, {"A2", A2}, {"A2s", A2s}, {"B2", B2},
	{"C3", C3}, {"C3s", C3s}, {"D3", D3}, {"D3s", D3s}, {"E3", E3}, {"F3", F3}, {"F3s", F3s}, {"G3", G3}, {"G3s", G3s}, {"A3", A3}, {"A3s", A3s}, {"B3", B3},
	{"C4", C4}, {"C4s", C4s}, {"D4", D4}, {"D4s", D4s}, {"E4", E4}, {"F4", F4}, {"F4s", F4s}, {"G4", G4}, {"G4s", G4s}, {"A4", A4}, {"A4s", A4s}, {"B4", B4},
	{"C5", C5}, {"C5s", C5s}, {"D5", D5}, {"D5s", D5s}, {"E5", E5}, {"F5", F5}, {"F5s", F5s}, {"G5", G5}, {"G5s", G5s}, {"A5", A5}, {"A5s", A5s}, {"B5", B5},
	{"C6", C6}, {"C6s", C6s}, {"D6", D6}, {"D6s", D6s}, {"E6", E6}, {"F6", F6}, {"F6s", F6s}, {"G6", G6}, {"G6s", G6s}, {"A6", A6}, {"A6s", A6s}, {"B6", B6},
	{"C7", C7}, {"C7s", C7s}, {"D7", D7}, {"D7s", D7s}, {"E7", E7}, {"F7", F7}, {"F7s", F7s}, {"G7", G7}, {"G7s", G7s}, {"A7", A7}, {"A7s", A7s}, {"B7", B7},
	{"C8", C8}, {"C8s", C8s}, {"D8", D8}, {"D8s", D8s}, {"E8", E8}, {"F8", F8}, {"F8s", F8s}, {"G8", G8}, {"G8s", G8s}, {"A8", A8}, {"A8s", A8s}, {"B8", B8}
};

std::map<std::string, std::vector<float> > chord_map = {
	{"A", A}, {"Am", Am}, {"A_7", A_7},
	{"B", B}, {"Bm", Bm}, {"B_7", B_7},
	{"C", C}, {"Cm", Cm}, {"C_7", C_7},
	{"D", D}, {"Dm", Dm}, {"D_7", D_7},
	{"E", E}, {"Em", Em}, {"E_7", E_7},
	{"F", F}, {"Fm", Fm}, {"F_7", F_7},
	{"G", G}, {"Gm", Gm}, {"G_7", G_7},
};

typedef struct guitar_chord {
	std::vector<float> notes;
	float duration;
} guitar_chord;

#endif