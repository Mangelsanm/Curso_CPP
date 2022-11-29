/***********************MatchWithEllipses.cpp***********************
 * Cuando tenemos sobrecarga de funciones y ninguna tiene el tipo de
 * dato requerido por el usuario, y ademas de esto una de ellas esta
 * definida con 3 puntos, la llamada recurrira a esta ultima, ya que
 * los 3 puntos quiere decir que recibe cualquier numero de parametros
 * y de cualquier tipo. Esta siempre es la ultima opcion del compulador.
*/
#include <stdio.h>

class integer {
    public:
        void print(const char*) {
            printf("Const Char*\n");
        }
        void print(...) {
            printf("Ellipses\n");
        }
};

int main() {
    integer in;
    in.print(5);
    return 0;
}