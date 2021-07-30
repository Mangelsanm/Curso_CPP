#include <iostream>
using namespace std;

class MyException: public exception {
    public:
    virtual const char* what() const throw() {
        return "Algo va mal !!";
    }
};

class Error {
    public:
    void goesWrong() {
        throw MyException();
    }
};

int main() {
    Error error;
    try {
        error.goesWrong();
    }
    catch(MyException &e) {
        cout << e.what() << endl;
    }
    return 0;
}