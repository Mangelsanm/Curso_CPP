//Como debe ser el orden cuando se usa una subclase (bad_alloc) de la clase exception.
//El polimorfismo nos garantiza que podemos usar una subclase 

#include <iostream>
#include <exception>
using namespace std;

void getError() {
    bool error1 = true;
    bool error2 = false;

    if(error1) {
        throw bad_alloc();
    }

    if(error2) {
        throw exception();
    }
}

int main() {
    try {
        getError();
    }
    catch(exception &e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    catch(bad_alloc &e) {
        cout << "Caught bad_alloc: " << e.what() << endl;
    }
    return 0;
}