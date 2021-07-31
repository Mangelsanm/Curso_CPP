#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main() {
    Person person = {"Miguel", 34, 85};

    ofstream outFile;
    char const *fileName = "test.bin";

    outFile.open(fileName);

    if(outFile.is_open()) {
        outFile.write(reinterpret_cast<char *>(&person), sizeof(Person));
        outFile.close();
    }
    else {
        cout << "El archivo no fue creado" << endl;
    }

    //Leer el archivo binario
    Person otherPerson = {};
    
    ifstream inFile;
    // const char *inputFile = "test.bin";

    inFile.open(fileName, ios::binary);
    
    if(inFile.is_open()) {
        inFile.read(reinterpret_cast<char *>(&otherPerson), sizeof(Person));
        inFile.close();
    }
    else {
        cout << "El archivo no puede ser leido" << endl;
    }

    cout << otherPerson.name << " " << otherPerson.age << " " << otherPerson.weight << endl;

    return 0;
}