#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter number of Rows :\n");
    scanf("%d", &r);
    printf("Enter number of Columns :\n");
    scanf("%d", &c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element of index [%d][%d] : \n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Your Matrix : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d", arr[i][j]);
        }
    }
    printf("Spiral Matrix : \n");
    int minr = 0, maxr = r-1, minc = 0, maxc = c-1, t = r*c, c = 0;
    while(c<t){
        //print min row
        for(i=minc;i<maxc && c < t;i++){
            printf("[%d]", arr[minr][i]);
            c++;
        }
        minr++;
        // max column print
        for(i=minr;i<maxr && c < t;i++){
            printf("[%d]", arr[i][maxc]);
            c++;
        }
        maxc--;
        //print max row
        for(i = maxc; i>=minc && c < t;i--){
            printf("[%d]", a[maxr][i]);
            c++;
        }
        maxr--;
        for(i=maxr;i<=minr && c < t;i--){
            printf("[%d]", a[i][minc]);
            c++;
        }
        minc++;
    }
    return 0;
}