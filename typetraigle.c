#include<stdio.h>
int main(){
    int n,a,b;
    printf("enter number:");
    scanf("%d", &n);
    for (int i= 1; i<n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n; i>0;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}