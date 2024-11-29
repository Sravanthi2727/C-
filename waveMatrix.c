#include<stdio.h>
int main(){
    int b[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter element of index [%d][%d] : ", i,j);
            scanf("%d", &b[i][j]);
        }

    }
    printf("Your Matrix : \n");
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d]", b[i][j]);
        }
        printf("\n");
    }
    printf("Wave Matrix : \n");
     for(int i=0;i<2;i++){
        if(i%2==0){
            for(int j=0;j<2;j++){
               printf("[%d]", b[i][j]);
            }
        }
        else{
            for(int j=2-1;j>=0;j--){
               printf("[%d]", b[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}