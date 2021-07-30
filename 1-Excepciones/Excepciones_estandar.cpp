// Las excepciones pueden ser lanzadas desde los constructores.
// La clase bad_alloc es derivada de la clase exception.
// Esta excepcion es lanzada cuando no se puede reservar memoria al usar el operador new o new[].
// La funcion miembro what() identifica la excepcion.
#include <iostream>
using namespace std;

class ErrorExcep {
    public:
    ErrorExcep() {
        char *pName = new char[999999999999999];
        delete [] pName;
    }
};

int main() {
    try {
        ErrorExcep errorExcep;
    }
    catch(bad_alloc &e) {
        cout << "Excepcion: " << e.what() << endl;
    }
    return 0;
}