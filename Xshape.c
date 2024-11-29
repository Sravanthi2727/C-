#include<stdio.h>
int main(){
    int n, i, j, a, b;
    printf("Enter Number :");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            //b = i - a;
            if(i == j){
                printf("*");
            }
            else if(i + j == n + 1){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}