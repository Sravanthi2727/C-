#include<stdio.h>
int main(){
    int n;
// int a = 1; keep this to get continue abcdegfh.... traingle
    printf("Enter number :");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1; j <= i; j++){
            char d;
            d = 64 + a;
            printf("%c", d);
            a++;
        }
        printf("\n");
    }
    return 0;
}