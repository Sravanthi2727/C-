#include<stdio.h>
int main(){
    int n, a;
    printf("Enter number :");
    scanf("%d", &n);
    a = 1;
       for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",a);
            a++;
        }
    printf("\n");
    }
    return 0;
}