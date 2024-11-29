#include<stdio.h>
int fac(int a){
    int i, f = 1;
    for(i=1;i<=a;i++){
        f *= i;
    }
    return f;
}
int ncr(int n, int r){
    int c;
    int fac();
    c = fac(n)/(fac(r)*fac(n-r));
    return c;
}
int npr(int n, int r){
    int p;
    int fac();
    p = fac(n)/(fac(n-r));
    return p;
}
int main(){
    int n, i, j, cmb;
    printf("Enter No.of rows for pascals trangle :");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            cmb = ncr(i,j);
            printf("%d ", cmb);
        }
        printf("\n");
    }
    printf("\n \n \n \n");
    for(i=0;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            cmb = npr(i,j);
            printf("%d ", cmb);
        }
        printf("\n"); //another way is to use ncr+1 / n-r = ncr / r+1 formula
    }
    return 0;
}