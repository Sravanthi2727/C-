#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        for(j=1; j<=2;j++){
            if(j==1){
                for(k=1;k<=i;k++){
                    printf("%d",k);
                }
            printf(" ");
            }
            else{
                for(k=i;k>0;k--){
                    printf("%d",k);
                }
            }
        }
    printf("\n");
    }
    return 0;
}