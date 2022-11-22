/****************Contained_Class.cpp****************
 * Crear una instancia estatica de la clase integer
 * dentro de la clase keep_count para observar el 
 * control de flujo del programa.
***************************************************/

#include <stdio.h>

class integer {                 // Container, definicion de la clase
    private:
        int number;
    public:
        integer(int = 0);
        integer& increment();
        int print() const;
};

class keep_count {              // Contained, instancia clase integer
    private:
        static integer counter;
    public:
        keep_count();
        int print() const;
};

// La instancia counter de la clase integer esta en un espacio global
// es por eso que el constructor de la clase integer es llamado primero.
integer keep_count::counter = 0;    // Definicion miembro de dato estatico

inline integer::integer(int x): number(x){
    printf("Inside integer Constructor\n");
}

inline integer& integer::increment() {
    number++;
    return *this;
}

inline int integer::print() const {
    return number;
}

inline keep_count::keep_count() {
    printf("Inside keep_count Constructor\n");
    // La instancia counter tiene acceso a la funcion miembro de su clase (integer)
    // La funcion increment es llamada usando la instancia counter desde dentro
    // del constructor de la clase keep_count. 
    counter.increment();
}

inline int keep_count::print() const {
    return counter.print();
}

int main() {
    keep_count kp1, kp2, kp3;
    printf("Number of instances created: %d", kp1.print());
    return 0;
}