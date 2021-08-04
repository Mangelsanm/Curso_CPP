//Las listas tienen un comportamiento similar a los vectores, la diferencia principal entre estos es que con las listas
//se pueden insertar valores al inicio, final o en cualquier indice, mientras que con los vecrores solo se pueden insertar
//al final de la lista.
//Este es un ejemplo de listas ligadas, un vector es una lista ligada, mientras que una lista es una doblemente ligada.
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 9);

    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}