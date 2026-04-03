#include <stdio.h>

typedef struct {
    char nombre[50];
    int edad;
} Persona;

void saludar(Persona p) {
    printf("Hola %s\n", p.nombre);
}

int main(){
    Persona p = {"Juan", 20};
    saludar(p);
    return 0;
}