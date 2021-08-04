#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> strings;

    strings.push_back("Uno");
    strings.push_back("Dos");
    strings.push_back("Tres");

    for(int i = 0; i < strings.size(); i++) {
        cout << strings[i] << ", " << flush;
    }

    cout << endl;

    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
        cout << *it << ", " << flush;
    }

    return 0;
}