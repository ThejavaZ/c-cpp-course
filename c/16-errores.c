#include <stdio.h>
#include <errno.h>

int dividir(int a, int b) {
    if (b == 0) return -1;
    return a / b;
}

int main(){
    int resultado = dividir(10, 0);
    if (resultado == -1) {
        errno = EINVAL;
        // error
    }
}
