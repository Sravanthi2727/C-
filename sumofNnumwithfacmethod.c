#include<stdio.h>
int fac(int n){
    if (n == 1) return 1;
    return n + fac(n-1);
}
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d", &a);
    int f = fac(a);
    printf("Factorial of a given  number %d is : %d",a, f);
    return 0;
}
