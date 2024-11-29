#include<stdio.h>
void pas(int n){
    int i,j,k;
    for(i=0;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        } 
        int m1 = 1, m2=1;
        for(j=0;j<=i;j++){
            for(k=i;k<=j;k--){
                m1 *= k;
            }
            for(k=1;k<=j;k++){
                m2 *= k;
            }
            printf("%d", m1/m2);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    pas(n);
}