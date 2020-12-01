#include <iostream>
#include <fstream>
#include <unordered_set>;
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unordered_set<int> nrSet;
    vector<int> numbers;
    unordered_set<int> pairs;

    const int year = 2020;

    ifstream input;
    input.open("input1");
    ofstream output;
    output.open("output1B");
    int nr;
    while (input >> nr) {
        numbers.push_back(nr);
        nrSet.insert(nr);
    }

    for (int i = 0; i < (int)numbers.size(); i++) {
        for (int j = i + 1; j < (int)numbers.size(); j++) {
            if (nrSet.find(year - numbers[i] - numbers[j]) != nrSet.end()) {
                pairs.insert(numbers[i] * numbers[j] * (year - numbers[i] - numbers[j]));
            }
        }
    }

    for (auto &pair : pairs) {
        output << pair << '\n';
    }

    input.close();
    output.close();
    return 0;
}