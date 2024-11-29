#include<stdio.h>
#include<string.h>
int main(){
   char s[1000];
   char ts[100][1000];
   fgets(s,sizeof(s),stdin);
   int i,j,k,l,n=strlen(s);
   for(i=0;i<n;i++){
    if(s[i]=='\n') s[i]='\0';
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(s[i]!='\0'){
            ts[j][i]=s[i];
        }
    }
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%s", ts[i][j]);
    }
   }
   return 0;
}