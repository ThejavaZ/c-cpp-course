#include <stdio.h>

int main(){
    int x = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }
    
    while (x > 0){
        printf("%d\n", x);
        x--;
    }
    
    do{
        printf("%d\n", x);
        x--;
    }while(x > 0);
    
    return 0;
}