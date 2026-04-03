#include "elements/math_utils.h"
#include <stdio.h>
int main(){
    int num1 = 5;
    int num2 = 10;

    // int sumar(int a, int b);
    int resultado = sumar(num1, num2);

    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
    
    return 0;
}