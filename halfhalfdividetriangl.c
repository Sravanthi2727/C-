#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            printf("%d", j);
        }
        printf("\n");
    }
}