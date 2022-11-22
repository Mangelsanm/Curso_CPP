/*****************StaticMemFunction.cpp*****************
 * C++ requiere una instancia de una clase para invocar
 * funciones miembro no-estaticas. Las funciones miembro
 * estaticas son independientes a la instancia, no hace 
 * sentido utilizar las funciones miembro no estaticas
 * para obtner el valor de un miembro de dato estatico.
 * Para acceder a un miembro de dato estatico tenemos las
 * funciones miembro estaticas.
 * ************Characteristics of a Static member function**************
 * While it is a member function, there is never a "this" pointer as the first formal argument.
 * The function can manipulate only static data members of the class.
 * It cannot be declared as an accessor function (keyword const after following the argument list).
 * Since it is instance independent, it can be called directly by using the class name and scope resolution operator (assuming that it is public).
*/
#include <stdio.h>

class keep_count {
    private:
        static int count;   // Declaracion miembro de dato estatico.
    public:
        keep_count();
        static int getcount();  // Declaracion funcion miembro estatica.
};

int keep_count::count = 0;  // Definicion miembro de dato estatico.

inline keep_count::keep_count() {
    printf("Inside Constructor\n");
    count++;
}

inline int keep_count::getcount() { // Definicion funcion miembro estatica.
    return count;
}

int main() {
    printf("%d\n", keep_count::getcount());
    // Las funciones miembro estaticas pueden llamarse usando el nombre de la clase
    // y el operador de resolucion de ambito.
    keep_count kp1, kp2, kp3;
    printf("%d\n", keep_count::getcount());
    return 0;
}