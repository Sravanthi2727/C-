#include<stdio.h>
int main(){
    int n, a;
    printf("Enter number :");
    scanf("%d", &n);
    a = 1;
       for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
                a = 1;
            }
        else a = 0;
        for(int j = 1; j <= i; j++){
            printf("%d", a);
            if(a==0) a  = 1;
            else a = 0;
        }
    printf("\n");
    }
    return 0;
}