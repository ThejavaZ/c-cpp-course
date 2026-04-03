#include <iostream>

using namespace std;

int numero = 2;
void main(){
    if (numero > 0) {
        numero = numero + 1;
    } else {
        numero = numero - 1;
    }
    
    switch (numero)
    {
    case 1:
        cout << "El numero es uno" << endl;
        break;
    
    default:
        cout << "El numero no es uno" << endl;
        break;
    }
}