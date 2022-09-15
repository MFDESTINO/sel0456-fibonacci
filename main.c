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


int fib_rec(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fib_rec(n-1) + fib_rec(n-2);
}

int main() {
    fib_for(10);
    return 0;
}
