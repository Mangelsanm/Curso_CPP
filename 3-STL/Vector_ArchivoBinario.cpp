#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// struct Numeros {
//     vector<string> edades;
//     // char nombre[50];
// };

int main() {
    // Numeros numeros;
    // numeros.edades.push_back("treinta");

    string *numeros = (string*)malloc(sizeof(string));

    // char numeros[50] = "Miguel";

    // Numeros numeros = {"Miguel"};

    // for(vector<string>::iterator it = numeros.edades.begin(); it != numeros.edades.end(); it++) {
    //     cout << *it << endl;
    // }

    ofstream outFile;
    char const *nameFile = "vector.bin";

    outFile.open(nameFile);

    if(outFile.is_open()) {
        outFile.write(reinterpret_cast<char *>(&numeros), sizeof(string));
        outFile.close();
    }
    else {
        cout << "El archivo no pudo ser creado" << endl;
    }

    // cout << numeros.edades[0] << endl;
    // cout << sizeof(Numeros) << endl;
    cout << sizeof(vector<string>) << endl;

    return 0;
}