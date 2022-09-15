#include <stdio.h>

void fib_for(int n){
    int f_atual=1;
    int f_anterior=0;
    int fib=0;
    for(int i=0;i<10;i++) {
        printf("%d ", f_anterior);
        fib = f_atual+f_anterior;
        f_anterior = f_atual;
        f_atual = fib;
    }
    printf("\n");
}


int main() {
    fib_for(10);
    return 0;
}
