#include<stdio.h>
void D2B(int n){
    if(n==0) return;
    D2B(n/2);
    printf("%d", n%2);
    return;
}
int main(){
    int n;
    printf("Enter a Decimal Number to get Binary Number :");
    scanf("%d", &n);
    printf("Deciml to binary of %d is : ", n);
    D2B(n);
    return 0;
}