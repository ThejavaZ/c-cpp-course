#include <stdio.h>
#include <iostream>

using namespace std;

class Persona{
    private:
    string nombre;
    int edad;

    void saludar() {
        cout << "Hola " << nombre << endl;
    }
};