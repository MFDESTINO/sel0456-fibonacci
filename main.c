#include <stdio.h>


int fib_rec(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fib_rec(n-1) + fib_rec(n-2);
}

int main() {
    for (int i=0;i<10;i++)printf("%d ", fib_rec(i));
    printf("\n");
    return 0;
}
