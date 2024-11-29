#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    for(int i=1;i <= n;i++){
        for(int j = n-i;j>0;j--){
            printf(" ");
        }
        for(int s=1;s<=i;s++){
            printf("*");
        }
        for(int t = 2;t<=i;t++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1;i < n;i++){
        for(int j = 1; j<=i; j++){
            printf(" ");
        }
        for(int j = n-i;j>0;j--){
            printf("*");
        }
        for(int j = n-i-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}