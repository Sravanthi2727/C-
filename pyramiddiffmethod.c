#include<stdio.h>
int main(){
    int n,i,j,b=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){printf(" ");}
        int a = 1;
        for(j=0;j<=2*(i-1);j++){
            printf("*");
            printf("%d",a);
            printf("%c",64+a);
            printf("%d",b);
            printf("%c", 64 + b);
            b++;
            a++;
            }
        printf("\n");
    }
}