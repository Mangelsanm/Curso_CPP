#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;
    const char *outputNameFile = "text.txt";

    outFile.open(outputNameFile);

    if(outFile.is_open()) {
        outFile << "Miguel Angel Sanchez Mares" << endl;
        outFile << 34 << endl;
        outFile << "Continental" << endl;
        outFile.close();
    }
    else {
        cout << "No se creo el archivo: " << outputNameFile << endl;
    }

    return 0;
}