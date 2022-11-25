/**************FriendOfTwoClasses.cpp**************
 * Programa donde una funcion declarada como friend,
 * necesita ser friend de dos clases.
**************************************************/

#include <stdio.h>

class second;

class first{
    private:
        int x;
    public:
        first(int = 0);
        friend void max(const first&, const second&);
};
class second{
    private:
        int y;
    public:
        second(int = 0);
        friend void max(const first&, const second&);
};

first::first(int x): x(x){}
second::second(int x): y(x){}

void max(const first &inref1, const second &inref2) {
    if(inref1.x > inref2.y)
        printf("%d es mayor a %d", inref1.x, inref2.y);
    else if(inref1.x < inref2.y)
        printf("%d es mayor a %d", inref2.y, inref1.x);
    else
        printf("Los dos numeros son iguales");
}

int main() {
    first f1(7);
    second s1(7);
    max(f1, s1);
    return 0;
}