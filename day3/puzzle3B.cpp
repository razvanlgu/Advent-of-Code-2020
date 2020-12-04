#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>

using namespace std;

char m[400][50];
int l = 0;
int c = 0;

int getTrees(int x, int y) {
    int posx = 0;
    int posy = 0;
    int noTrees = 0;
    while (posx < l) {
        if (m[posx][posy] == '#') {
            noTrees++;
        }
        posy = (posy + y) % c;
        posx += x;
    }

    return noTrees;
}

int main() {
    ifstream input;
    input.open("input3");
    ofstream output;
    output.open("output3B");

    char s[200];
    while (input.getline(s, 200)) {
        strcpy(m[l], s);
        l++;
        c = strlen(s);
    }
    
    output << (long long)getTrees(1, 1) * getTrees(1, 3) * getTrees(1, 5) * getTrees(1, 7) * getTrees(2, 1);
    input.close();
    output.close();
    return 0;
}