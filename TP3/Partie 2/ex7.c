#include <stdio.h>
int main(){
  int n,i,j,l,c,k=0;
  do{
    printf("Donne n: ");
    scanf("%d",&n);
  }while(!(n>5));
  int t[n];
  do{
    printf("Donne l: ");
    scanf("%d",&l);
  }while(!(n%l==0));
  c=n/l;
  int m[l][c];
  for(i=0;i<n;i++){
    printf("T[%d]=",i);
    scanf("%d",&t[i]);
  }
  printf("T:\n");
  for(i=0;i<n;i++){
    printf("%d",t[i]);
  }
  for (i = 0; i < l; i++)
  {
    for ( j = 0; j < c; j++)
    {
      m[i][j]=t[k++];
    }
  }
  printf("\nM:\n");
  for (i = 0; i < l; i++)
  {
    for ( j = 0; j < c; j++)
    {
      printf("%d |",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}