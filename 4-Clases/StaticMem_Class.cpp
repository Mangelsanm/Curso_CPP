/******StaticMem_Class.pp******
 * Al usar un miembro de dato estatico dentro de una clase
 * este se guardara en la region de memoria para variables
 * globales. Cada que se crea una instancia de la clase
 * esta usara/compartira la variable.
*/
#include <stdio.h>

class Keep_Counter {
    private:
        static int counter;
    public:
        Keep_Counter();
        int getCounter() const;
};

int Keep_Counter::counter = 0; // Definicion miembro de dato estatico

inline Keep_Counter::Keep_Counter() { // Constructor
    counter++;
}

inline int Keep_Counter::getCounter() const {
    return counter;
}

int main() {
    /*  Al crear una instancia de la clase, el constructor incrementa
    *   la variable estatica, con este programa podemos saber cuantas
    *   instancias han sido creadas. */
    Keep_Counter kp1, kp2, kp3;
    printf("number of instances: %d", kp1.getCounter());
    return 0;
}