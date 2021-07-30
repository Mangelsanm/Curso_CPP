#include <iostream>
using namespace std;

void errorFunction() {
    bool error1 = false;
    bool error2 = true;

    if(error1) {
        throw 8;
    }

    if(error2) {
        throw "Fatal error";
    }
}

int main() {
    try {
        errorFunction();
    }
    catch(int e) {
        cout << "Error code: " << e << endl;
    }
    catch(char const *e) {
        cout << "Error message: " << e << endl;
    }
    return 0;
}