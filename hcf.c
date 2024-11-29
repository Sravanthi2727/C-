#include<stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else if (a>b) return b;
    else return 0;
}
int gcd(int a, int b){
    int i,hcf;
     for(i=1;i<=min(a,b);i++){
         if(a%i==0 && b%i == 0) hcf = i;
     }
     return hcf;
}
int HCF(int a, int b){ //fastest way to get hcf if we go in reverse order
    int i,hc;
    int min();
    for(i=min(a,b);i>0;i--){
        if(a%i==0 && b%i==0) {
            hc =i;
            break;
        }
    return hc;
    }
}
int main(){
    int a, b;
    printf("enter 1st no :");
    scanf("%d", &a);
    printf("enter 2nd no :");
    scanf("%d", &b);
    int h = HCF(a,b);
    printf("The HCF/GCD of %d and %d is : %d", a, b, h);
    return 0;
}