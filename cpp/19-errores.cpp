#include <iostream>

using namespace std;

void main(){
    int x;
    try {
        if (x == 0)
            throw runtime_error("División entre cero");
    } catch (exception& e) {
        cout << e.what();
    }
}

