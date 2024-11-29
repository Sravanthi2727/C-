#include<stdio.h>
int main(){
  //reverse traingle + normal triangle = oppo traingle
  int n,i,j,h,b=2,l;
  printf("enter a number :");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
       printf(" ");
    }
    for(h=1;h<=i;h++){
        if(i==1) printf("%d",i);
        else {
            printf("%d ",b);
            b+=2;}
    }
    printf("\n");
  }    
  return 0;
}