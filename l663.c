#include<stdio.h>
int main(){
    int n, a=65,i,j;
    printf("Enter number :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
