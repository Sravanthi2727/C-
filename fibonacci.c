#include<stdio.h>
int fibo(int n){
    if(n==1 || n == 2) return 1;
    int s = fibo(n-1) + fibo(n-2);
    return s;
}
int main(){
    int n;
    printf("Enter a number for fibonacci series :");
    scanf("%d", &n);
    printf("Fibonacci series: \n");
    for(int i = 1; i<=n; i++){
        printf("%d ", fibo(i));
    }
    return 0;
}