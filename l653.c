#include<stdio.h>
int main(){
    int n, i, j,k;
    
    printf("Number:");
    scanf("%d", &n);
    k = n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<k+k;j++){
            printf("%d",j);
        }
        k--;
    printf("\n");
    }
}