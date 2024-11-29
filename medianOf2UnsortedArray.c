#include<stdio.h>
int main(){
    int a[]={1,2,8,4}, b[]={6,3,5}, i,d;
    int c[1000];
    for(i=0;i<4;i++){
        c[i]=a[i];
    }
    for(i=0;i<3;i++){
        c[4+i]=b[i];
    }
    for(i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(c[i]>c[j]){
                 d = a[j];
                 a[i]=a[j];
                 a[j]=d;
            }
        }
    }
    for(i=0;i<7;i++){
        printf("%d ", c[i]);
    }
}