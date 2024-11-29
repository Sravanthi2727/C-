int main(){
  //reverse traingle + normal triangle = oppo traingle
  int n,i,j,h,b;
  printf("enter a number :");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
       printf(" ");
    }
    int a = 1;
    a = 64 + 1;
    for(h=1;h<=i;h++){
        printf("%c", a);
        a++;
    }
    printf("\n");
  }    
  return 0;
}