#include<stdio.h>
int fibo(int n){
    if(n==1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("Enter a number for fibonacci series :");
    scanf("%d", &n);
    printf("Fibonacci series %d", fibo(n));
    return 0;
}
