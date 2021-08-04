// Personaliza objetos como el valor del un map.
// Se crea una clase con un constructor con y sin parametros e inicializar los miembros de datos,
// que en este caso corresponderan a los valores de una estructura Map, cuando declaremos un Map
// podremos agregar el nombre de la clase como tipo de dato del valor del Map (map<int, Person>).
// Con la variable que es un tipo de dato Map (persona), podremos crear objetos de la clase Person
// y llamar el constructor para asi asignar el valor del Map.
#include <iostream>
#include <map>
using namespace std;

class Person {
    private:
    string nombre;
    int edad;

    public:
    Person() {}
    Person(string nombre, int edad): nombre(nombre), edad(edad){}
    void print() {
        cout << nombre << ": " << edad << endl;
    }
};

int main() {
    map<int, Person> persona;

    persona[0] = Person("Miguel", 34);
    persona[1] = Person("Natalli", 36);
    persona[2] = Person("Madi", 74);

    for(map<int, Person>::iterator it = persona.begin(); it != persona.end(); it++) {
        it->second.print();
    }

    return 0;
}