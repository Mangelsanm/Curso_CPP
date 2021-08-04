#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> edades;

    edades["Miguel"] = 34;
    edades["Nata"] = 36;
    edades["Madi"] = 74;

    for(map<string, int>::iterator it = edades.begin(); it != edades.end(); it++) {
        cout << it->first << ": " << it->second << endl; 
    }

    return 0;
}