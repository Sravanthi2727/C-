#include<stdio.h>
void sum(int n, int s){
    // int s= 0;
    // for(int i= 0;i<=n;i++){
    //     s += i;
    // }
    // printf("%d", s);
    if(n==0) {
        printf("%d", s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);
    sum(n,0);
    return 0;
}