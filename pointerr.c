#include<stdio.h>
int main(){
    int a = 5, *x = &a;
    printf("%d\n", &a);
    printf("%u\n", x);
    printf("%u", *x);
    printf("%p\n", &x);
    return 0;
}