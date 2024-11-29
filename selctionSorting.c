#include <stdio.h>

int main() {
    char a[20]="HI everyone";
    int i,j,n=strlen(a), in;
    for(i=0;i<n;i++){
        in = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[in]){
                in = j;
            }
        }
        int t;
        t=a[i];
        a[i]=a[in];
        a[in]=t;
    }
    for(i=0;i<n;i++){
        printf("%c", a[i]);
    }
    return 0;
}