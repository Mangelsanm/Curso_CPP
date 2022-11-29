/*******************UserDefinedConv.cpp*******************
 * Sobrecarga de funciones, como hace el compilador para
 * elegir la funcion adecuada. Ejemplo, si la llamada a
 * la funcion tiene como parametro un tipo de dato diferente
 * al definido en la funcion, el constructor creara una
 * instancia temporal la cual sera proporcionada para la
 * funcion assign.
 * Flujo del programa: creamos una instancia de la clase
 * integer y le asignamos un valor de 5 a numero, invocamos
 * la funcion assign pero con un entero en lugar de una
 * instancia del tipo integer, como no hace match el tipo
 * de dato con el definido en el prototipo de funcion, el
 * constructor creara una instancia temporal que sera 
 * usada por la funcion assign y asi poder asignar el valor
 * de 3 al miembro de dato numero.
*/
#include <stdio.h>

class integer {
    private:
        int numero;
    public:
        integer(int = 0);
        void assign(const integer&);
        void print() const;
};

inline integer::integer(int num): numero(num) {
    printf("Inside Constructor\n");
}

inline void integer::assign(const integer &inref) {
    numero = inref.numero;
}

inline void integer::print() const {
    printf("number: %d\n", numero);
}

int main() {
    integer in(5);
    in.assign(3);   // El parametro no es de tipo integer
    in.print();
    return 0;
}