#include <stdio.h>
#include <iostream>

using namespace std;

class Animal {
    public:
        virtual void sonido(){
            cout << "Sonido";
        }
};

class Perro : public Animal {
    public:
    void sonido() override {
        cout << "Wof Wof";
    }
};
