#include <vector>
#include <iostream>
using namespace std;

std::vector<int> numeros = {1,2,3,4,5};
int main(){
    numeros.push_back(6);   // agregar
    numeros.pop_back();    // eliminar último
    numeros.size();        // tamaño
    numeros[0];            // acceso

    for (int n : numeros) {
    cout << n << endl;
}
}
