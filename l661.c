#include<stdio.h>
int main(){
    int n, i, j,l;
    int k;
    printf("Number:");
    scanf("%d", &n);
    k = 65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(l=n-i;l>0;l--){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
}