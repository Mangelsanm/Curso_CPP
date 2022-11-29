/****************ExactMatchTrivialConv.cpp****************
 * Funciones sobrecargadas, como es que el compilador elige
 * la funcion correcta que se debe llamar? Para esto hace
 * uso de la regla Exact Match and Trivial Conversions, el 
 * parametro debe coincidir exactamente con el argumento 
 * que se espera en la definicion de la funcion, si esto no
 * ocurre, pasa a Trivial conversions, en este caso si es
 * un entero lo que se envia y la definicion es un entero
 * pero como puntero, constante, referencia, etc.
*/
#include <stdio.h>

class integer {
    public:
        void print(char) {
            printf("Char\n");
        }
        // void print(const int) {
        //     printf("Const Int\n");
        // }
        void print(int&) {
            printf("Int &\n");
        }
        // void print(int) {
        //     printf("Int\n");
        // }
        void print(float) {
            printf("Float\n");
        }
        void print(double) {
            printf("Double\n");
        }
        void print(short) {
            printf("Short\n");
        }
};

int main() {
    integer in;

    char ch = 'A';
    int x = 10;
    float f = 9.8f;
    double d = 3.14;
    short p = 1;

    in.print(ch);
    in.print(x);
    in.print(f);
    in.print(d);
    in.print(p);

    return 0;
}