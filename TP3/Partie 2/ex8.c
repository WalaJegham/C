#include <stdio.h>
int main(){
  int i,j,l,c;
  do
  {
    printf("Donner L: ");
    scanf("%d",&l);
  } while (!(l>=2));
  do
  {
    printf("Donner C:");
    scanf("%d",&c);
  } while (!(c>1));
  int t[c],m[l][c],r[c];
  for ( i = 0; i < c; i++)
  { 
    printf("T[%d]=",i);
    scanf("%d",&t[i]);
  }
  for ( i = 0; i < l; i++)
  {
        for ( j = 0; j < c; j++)
    {
      printf("M[%d][%d]=",i,j);
      scanf("%d",&m[i][j]);
    }
  }
  printf("T:\n");
  for ( i = 0; i < c; i++)
  {
    printf("%d |",t[i]);
  }
  printf("\nM:\n");
  for ( i = 0; i < l; i++)
  {
    for ( j = 0; j < c; j++)
    {
      printf("%d |",m[i][j]);
    }
    printf("\n");
  }
  for ( i = 0; i < c; i++)
  {
    r[i]=1;
  }
  i=0;
  while (i<l)
  {
    for ( j = 0; j < c; j++)
    {
      r[j]+=m[i][j]*t[j];
    }
    i++;
  }
  printf("Resultat :\n");
  for ( i = 0; i < c; i++)
  {
    printf("%d\n",r[i]);
  }
  return 0;
}