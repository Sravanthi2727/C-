#include<stdio.h>
int main(){
   int n,i,j,b,c;
   char a;
   printf("Enter number :");
   scanf("%d", &n);
   for(i=1;i<=n;i++){
    for(j=n-i;j>0;j--){
       printf(" ");
    }
    for(j=1;j<=i;j++){        
        printf("* ");
    }
    printf("\n");
   }
} 