#include <iostream>
#include <string.h>
using namespace std;

class MyString {
    private:
        char *name;
    public:
        MyString(const char* = "\0");
        MyString(const MyString&);
        ~MyString();
        bool operator==(const MyString&);
        bool operator<(const MyString&);
        MyString operator+(const MyString&);
        const char* getname() const;
};

MyString::MyString(const char* nm) {
    cout << "In Constructor" << endl;
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
}

MyString::MyString(const MyString &inref) {
    cout << "In Copy Constructor" << endl;
    name = new char[strlen(inref.name)+1];
    strcpy(name, inref.name);
}

MyString::~MyString() {
    cout << "In Destructor" << endl;
    delete [] name;
}

bool MyString::operator==(const MyString &inref) {
    if(!strcmp(name, inref.name))
        return true;
    else
        return false;
}

bool MyString::operator<(const MyString &inref) {
    if(strlen(name) < strlen(inref.name))
        return true;
    else
        return false;
}

MyString MyString::operator+(const MyString &inref) {   // ins1.+(ins2)
    MyString temp;  // Instancia temp, se llama al constructor se usa el name de ins1
    strcat(temp.name, name);    // se c
    return temp;
}

const char* MyString::getname() const {
    return name;
}

int main() {
    MyString ms1("Miguel");
    MyString ms2("Miguel.");
    // if(ms1 == ms2)  //ms1.operator==(ms2)
    //     cout << "The Strings are equal" << endl;
    // else
    //     cout << "The Strings are different" << endl;
    
    // if(ms1 < ms2)  //ms1.operator<(ms2)
    //     cout << ms2.getname() << " is larger than "<< ms1.getname() << endl;
    // else
    //     cout << ms1.getname() << " is larger than "<< ms2.getname() << endl;

    ms1+ms2;

    
    return 0;
}