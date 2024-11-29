#include<stdio.h>
void inc(int n){
    if(n==0) return; //base run
    printf("%d\n", n);
    inc(n-1); //call
    printf("%d \n", n); //code
    return;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    inc(n);
    return 0;
}