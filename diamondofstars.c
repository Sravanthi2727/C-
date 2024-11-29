#include<stdio.h>
int main(){
   int n,i,j,a,b,c;
   printf("Enter number :");
   scanf("%d", &n);
   for(i=1;i<=n;i++){
    for(j=n-i;j>0;j--){
       printf("&");
    }
    for(j=1;j<=i;j++){
        printf("*");
    }
    for(j=1;j<=i-1;j++){
        printf("*");
    }
    printf("\n");
   }
   //incomplete
} 
