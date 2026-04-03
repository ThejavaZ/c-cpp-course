#include <string>
#include <iostream>

using namespace std;

void main(){
    string texto = "Hola mundo";
    string texto_comillas = "Ella dijo: \"Hola\"";
    string texto_multilinea = "Linea 1\nLinea 2\nLinea 3";
    string texto_con_tab = "Columna1\tColumna2\tColumna3";
    string texto_vacio = "";
    string texto_espacios = "   Espacios al inicio y al final   ";
    string texto_concatenado = "Hola, " + string("mundo") + "!";
    string texto_repetido = string(3, '*'); // "***"
    size_t longitud_texto = texto.length();
    char primer_caracter = texto[0];
    string subtexto = texto.substr(0, 4); // "Hola"
    texto.append("!!!"); // "Hola mundo!!!"
    size_t posicion_mundo = texto.find("mundo"); // 5
}