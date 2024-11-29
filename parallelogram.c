#include<stdio.h>
int main(){
  //reverse traingle + normal triangle = oppo traingle
  int n,i,j,h,b;
  printf("enter a number :");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
       printf(" ");
    }
    for(h=1;h<=i;h++){
        printf("*");
    }
    for(j=n-i;j>0;j--){
        printf("*");
    }
    printf("\n");
  }    
  return 0;
}