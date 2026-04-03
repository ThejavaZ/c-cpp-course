#include <stdio.h>
int sumar(int a, int b){
    return a + b;
}


int main(){
    int num1, num2;
    printf("Ingrese un numero: ");
    scanf("%s\n", num1);
    printf("Ingrese un numero: ");
    scanf("%s\n", num2);

    int resultado = sumar(num1, num2);

    printf("Resultado: %d\n", resultado);
    return 0;
}