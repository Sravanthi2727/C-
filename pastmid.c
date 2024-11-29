#include<stdio.h>
int main(){
    int a,h,i,j;
    printf("Enter the Number:");
    scanf("%d", &h);
    int n[h];
    for(i=0;i<h;i++){
        printf("enter  number");
        scanf("%d",&a);
        n[i]=a;
    }
    //printf("%d", a);
    for(i=1;i<=h;i++){
        for(j=1;j<=i;j++){
             printf("%d", n[i-1]);
        }
    printf("\n");
    }
    for(i=h-1;i>0;i--){
        for(j=i;j>0;j--){
             printf("%d", n[i-1]);
        }
    printf("\n");
    }
    
}