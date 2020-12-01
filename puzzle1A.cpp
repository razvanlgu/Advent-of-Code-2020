#include <iostream>
#include <fstream>
#include <unordered_set>;

using namespace std;

int main() {
    unordered_set<int> nrSet;
    const int year = 2020;

    ifstream input;
    input.open("input1");
    ofstream output;
    output.open("output1A");
    int nr;
    while (input >> nr) {
        if (nrSet.find(year - nr) != nrSet.end()) {
            output << nr * (year - nr);
            break;
        }
        nrSet.insert(nr);
    }

    input.close();
    output.close();
    return 0;
}