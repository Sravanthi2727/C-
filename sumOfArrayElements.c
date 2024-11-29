#include<stdio.h>
int ASum(int a[],int n){
    int s =0;
    for(int i = 0;i<n;i++){
        s += a[i];
    }
    return s;
}
int main(){
    int n;
    printf("Enter number of array elements do you want to store :");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the elements in the index of [%d] :", i);
        scanf("%d", &a[i]);
    }
    printf("Sum of Array Elements : %d", ASum(a,n));
    return 0;
}