#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    input.open("input2");
    ofstream output;
    output.open("output2B");
    char c, target;
    string s;
    int idx1, idx2;
    int nrOcc;
    int noValidPass = 0;
    while (input >> idx1) {
        input >> idx2;
        idx2 *= -1;
        idx1--;
        idx2--;
        input >> target;
        input >> c;
        input >> s;
        if ((s[idx1] == target && s[idx2] != target) || (s[idx1] != target && s[idx2] == target))
            noValidPass++;
    }

    output << noValidPass;
    
    input.close();
    output.close();
    return 0;
}