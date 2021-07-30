#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    char const *fileName = "analisis.txt";

    file.open(fileName);

    if(!file.is_open()) {
        return 1;
    }

    while(file) {
        string line;
        getline(file, line, ':');
        cout << "nombre: " << line << endl;

        int edad;
        file >> edad;

        // file.get();
        file >> ws;

        cout << "edad: " << edad << endl;

        cout << "caracter de fin de linea" << endl;
    }

    file.close();
    return 0;
}