/****************FriendFunc_Return.cpp****************
 * Una funcion declarada como friend, regularmente toma 
 * como argumento un puntero o una referencia. De la 
 * misma manera, puede regresar una instancia de la clase.
 * En este programa la funcion declarada como friend,
 * necesita tener acceso a dos instancias. Si usaramos
 * una de las funciones miembro de la clase, necesitariamos
 * una instancia para invocar la funcion.
*/
#include <stdio.h>

class integer {
    private:
        int number;
    public:
        integer(int = 0);
        int print() const;
        friend integer add(const integer&, const integer&);
};

integer::integer(int x): number(x) {
    printf("Inside Constructor\n");
}

inline int integer::print() const {
    return number;
}

inline integer add(const integer &inref1, const integer &inref2) {
    // Una instancia es creada temporalmente ya que la funcion regresa
    // una instancia de tipo integer.
    return inref1.number + inref2.number;
}

int main() {
    integer in1(4), in2(12), in3;
    in3 = add(in1, in2);
    printf("the sum of %d + %d is: %d", in1.print(), in2.print(), in3);
    return 0;
}