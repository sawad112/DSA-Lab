#include <stdio.h>

int fibo(int a, int b, int n){
    if(n==0)
        return 0;
    printf("%d ",a);
    fibo(b, a+b, n-1);
}

int main(){
    int x, a=0, b=1;
    printf("Enter x for terms: ");
    scanf("%d", &x);

    fib(a,b,x);
    return 0;
}
