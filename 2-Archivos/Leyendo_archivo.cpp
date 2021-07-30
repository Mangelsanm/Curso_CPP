#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    char const *inputFileName = "test.txt";

    inFile.open(inputFileName);

    if(inFile.is_open()) {
        string line;

        while(!inFile.eof()) {
            getline(inFile, line);
            cout << line << endl;
        }
    }
    return 0;
}