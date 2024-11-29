#include<stdio.h>
void inc(int a, int n){
    if(n>a){
        return;
    }
    printf("%d\n", n);
    n = n + 1;
    inc(a,n);
    return;
}
int main(){
    int a;
    printf("enter a number :");
    scanf("%d", &a);
    inc(a, 1);
    return 0;
}