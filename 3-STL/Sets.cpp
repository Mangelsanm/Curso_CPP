// Introduccion de la estructura Set, Set solo almacena valores o elementos unicos, si se trata de insertar
// un elemento que ya ha sido agregado, este no sera insetardo. 

#include <iostream>
#include <set>
using namespace std;

class Test {
    private:
    int id;
    string nombre;

    public:
    Test(): id(0), nombre("") {}

    Test(int id, string nombre): id(id), nombre(nombre) {}

    void print() const {
        cout << id << ": " << nombre << endl;
    }

    bool operator<(const Test &other) const {
        return nombre < other.nombre;
    }
};

int main() {
    set<int> grupo;

    grupo.insert(10);
    grupo.insert(20);
    grupo.insert(20); // No se pueden repetir los valores
    grupo.insert(30);
    grupo.insert(40);

    for(set<int>::iterator it = grupo.begin(); it != grupo.end(); it++) {
        cout << *it << ", " << flush;
    }

    // Crear un Set personalizado con la ayuda de una clase
    set<Test> test;

    test.insert(Test(32431307, "Miguel"));
    test.insert(Test(32431323, "Issac"));
    test.insert(Test(32467307, "Julio"));

    for(set<Test>::iterator it = test.begin(); it != test.end(); it++) {
        it->print();
    }

    return 0;
}