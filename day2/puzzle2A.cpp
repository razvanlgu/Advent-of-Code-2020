#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    input.open("input2");
    ofstream output;
    output.open("output2A");
    char c, target;
    string s;
    int minOcc, maxOcc;
    int nrOcc;
    int noValidPass = 0;
    while (input >> minOcc) {
        input >> maxOcc;
        maxOcc *= -1;
        input >> target;
        input >> c;
        input >> s;
        nrOcc = 0;
        for (auto &ch : s) {
            if (ch == target) {
                nrOcc++;
            }
        }
        if (nrOcc >= minOcc && nrOcc <= maxOcc)
            noValidPass++;
    }

    output << noValidPass;
    
    input.close();
    output.close();
    return 0;
}