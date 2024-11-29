#include<stdio.h>
int main(){
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1; j <= i; j++){
            if (i % 2 == 0){
                char d;
                d = 64 + a;
                printf("%c", d);
                a++;
            }
            else{
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}