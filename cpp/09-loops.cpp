#include <iostream>

using namespace std;

void main(){
    int contador = 0;
    // for loop
    for(int i = 0; i < 5; i++){
        cout << "Iteracion: " << i << endl;
    }

    // while loop
    while(contador < 5){
        cout << "Contador: " << contador << endl;
        contador++;
    }

    // do while loop
    do{
        cout << "Contador en do while: " << contador << endl;
        contador--;
    } while(contador > 0);
    // range-based for loop
    for(char c : "Hola"){
        cout << c << endl;
    }
}