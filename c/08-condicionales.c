#include <stdio.h>

void main() {
    int x = 0;
    if (x > 0)
    {
        printf("Positivo");
    }else if (x < 0)
    {
        printf("Negativo");
    }
    else{
        printf("Cero");
    }

    switch (x)
    {
    case 0:
        printf("Opcion 0");
        break;
    
    default:
        break;
    }
    
}
