#include <stdio.h>

int main(){
    int suma = 0;
    int numeros[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }
    return 0;
}
