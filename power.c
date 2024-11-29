#include<stdio.h>
int expo(int n,int b){
    // int p = 1;
    // for(int i=1;i<=b;i++){
    //     p *= n;
    // }
    // printf("Answer %d", p);
    if(b==0) return 1;
    int r =  n*expo(n,b-1);
    return r;
}
int main(){
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    int b;
    printf("Enter power for that :");
    scanf("%d", &b);
    expo(n,b);
    printf("%d power %d is : %d", n, b, expo(n,b));
    return 0;
}