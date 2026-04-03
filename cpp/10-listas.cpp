#include <vector>
#include <iostream>

using namespace std;

vector<int> numeros = {1, 2, 3, 4, 5};
vector<string> palabras = {"Hola", "Mundo", "C++"};

void main(){
    // Acceder a elementos
    int primer_numero = numeros[0]; // 1
    string primera_palabra = palabras.at(0); // "Hola"

    cout << "Primer numero: " << primer_numero << endl;

    // Modificar elementos
    numeros[1] = 20; // Ahora el segundo elemento es 20
    palabras.at(2) = "Programacion"; // Ahora el tercer elemento es "Programacion"

    // Agregar elementos
    numeros.push_back(6); // Agrega 6 al final
    palabras.push_back("Lenguaje"); // Agrega "Lenguaje" al final

    // Eliminar el último elemento
    numeros.pop_back(); // Elimina el último elemento (6)
    palabras.pop_back(); // Elimina el último elemento ("Lenguaje")

    // Tamaño de la lista
    size_t tamaño_numeros = numeros.size(); // 5
    size_t tamaño_palabras = palabras.size(); // 3

    // Iterar sobre los elementos
    cout << "Numeros: ";
    for(int num : numeros){
        cout << num << " ";
    }
    cout << endl;

    cout << "Palabras: ";
    for(const string& palabra : palabras){
        cout << palabra << " ";
    }
    cout << endl;
}