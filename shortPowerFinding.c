#include<stdio.h>
int expo(int n,int b){
    // int p = 1;
    // for(int i=1;i<=b;i++){
    //     p *= n;
    // }
    // printf("Answer %d", p);
    if(b==1) return n;
    if(b==0) return 1;
    if(b%2==0){
        return expo(n,b/2)*expo(n,b/2);
    }
    else{
        return expo(n,b/2)*expo(n,b/2)*n;
    }
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