#include<stdio.h>
int main(){
    int x,n;
    printf("Enter the number of elements do you want to store :");
    scanf("%d", &n);
    int a[n];
    for(int i =0; i<n;i++){
        printf("Enter the element No. %d :", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            if(a[i]>a[j]) x = a[i];
            else x = a[j];
        }
    }
    printf("%d", x);
}