#include<stdio.h>
int fac(int n){
    if (n == 1 || n == 0) return 1;
    return n * fac(n-1);
}
int expo(int n,int b){
    if(b==0) return 1;
    int r =  n*expo(n,b-1);
    return r;
}
int main(){
    int a,i;
    float sign = 1.0 , sum = 0.0;
    printf("Enter a Number :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i += 2) {
        int f = fac(i); 
        int e = expo(a, i);  
        sum += sign * ((float)e / f);  
        sign = -sign;           // Alternate signs
    }

    printf("F(%d) = %f\n", a, sum);

    return 0;
}