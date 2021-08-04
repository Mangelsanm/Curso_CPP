//El metodo size nos deja saber el numero de elementos validos incluidos en el vector, mientras que el metodo
//capacity nos dice la longitud del vector, no deben tomarse como iguales estos metodos.
//Si se usa el metodo push_back y la longitud del vecror esta en su limite, se creara otro vector con una
//longitud mayor para poder almacer mas elementos.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numbers(100);

    cout << "Size: " << numbers.size() << endl;

    int capacity = numbers.capacity();
    cout << "Capacity: " << capacity << endl;

    for(int i = 0; i < 10000; i++) {
        if(numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            cout << numbers.capacity() << endl;
        }
        //Agregamos mas elementos al vector para forzarlo a incrementar su longitud.
        numbers.push_back(i);
    }

    numbers.clear();

    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;
    return 0;
}