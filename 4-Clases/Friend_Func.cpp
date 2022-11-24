/*******************Friend_Func.cpp*******************
 * Una funcion declarada como friend solo se le coloca 
 * esta palabra en la declaracion pero no su definicion.
 * Una funcion declarada como friend, no es publica ni
 * privada, puede ser escrita en cualquier lugar de la
 * definicion de la clase.
*/

#include <stdio.h>

class integer {
    private:
        int number;
    public:
        integer(int = 0);
        friend void print(const integer&);  // Declaracion de la funcion friend
};

integer::integer(int x): number(x) {
    printf("Inside Constructor\n");
}

// Ya que print no es una funcion miembro de la clase integer, no cuenta con el
// puntero this.
// No usa el nombre de la clase ni el operador de resolucion de ambito.
inline void print(const integer &inref) {
    printf("number: %d\n", inref.number);
}

int main() {
    integer in1;
    // La funcion declarada como friend no tiene puntero this, es por eso que
    // la llamada se hace como en una funcion tipica de C.
    print(in1); // instancia enviada como referencia a la funcion declarada como friend
    return 0;
}