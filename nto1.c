#include<stdio.h>
void inc(int n){
    if(n==0) return; //base run
    inc(n-1); //call
    printf("%d \n", n); //code
    // to decreas place this -- inc(n-1)-- line; //call 
    return;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    inc(n);
    return 0;
}