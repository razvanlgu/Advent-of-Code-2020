#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    ifstream input;
    input.open("input3");
    ofstream output;
    output.open("output3A");

    char s[200];
    char m[400][50];
    int l = 0;
    int c = 0;
    while (input.getline(s, 200)) {
        strcpy(m[l], s);
        l++;
        c = strlen(s);
    }

    int posx = 0;
    int posy = 0;
    int noTrees = 0;
    while (posx < l) {
        if (m[posx][posy] == '#') {
            noTrees++;
        }
        posy = (posy + 3) % c;
        posx++;
    }
    
    output << noTrees;
    input.close();
    output.close();
    return 0;
}