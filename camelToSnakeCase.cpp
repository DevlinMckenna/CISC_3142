#include <iostream>
using namespace std;

int main() {
    string line;
    cin >> line;
    string newLine;
    int size = line.length();
    

    //for(char c : line) {
    for(int i = 0; i < size; i++) {
        char c = line[i];
        if (c == toupper(c)) {
            newLine += '_';
            newLine += tolower(c);
        } else
            newLine += c;
    }

    cout << newLine << endl;
}
