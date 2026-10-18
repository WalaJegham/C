#include <stdio.h>
int main(){
  int n,k,i,j,l;
  do{
    printf("Donner N: ");
    scanf("%d",&n);
  }while(!(n>=2));
  do{
    printf("Donner M: ");
    scanf("%d",&k);
  }while(!(k>=2));
  int m[n],p[k],t[k+n];
  for ( i = 0; i < n; i++)
  {

    if (i==0)
    {
      printf("M[%d]=",i);
      scanf("%d",&m[i]);
    }
    else
    {       
	do{
        printf("M[%d]=",i);
        scanf("%d",&m[i]);
       }while(!(m[i]>m[i-1]));
    }
  }
  for (i = 0; i < k; i++)
  {
    if (i==0)
    {
        printf("N=[%d]=",i);
        scanf("%d",&p[i]);
    }
    else{  
	do{
        printf("N=[%d]=",i);
        scanf("%d",&p[i]);
      }while(!(p[i]>p[i-1]));

    }
  }
  i=0;j=0;l=0;
  while (i<n && j<k)
  {
    if(m[i]<p[i]){
      t[l++]=m[i++];
    }
    else{
      t[l++]=p[j++];
    }
  }
  while (i<n)
  {
    t[l++]=m[i++];
  }
  while (j<k)
  {
    t[l++]=p[j++];
  }
  printf("M:\n");
  for ( i = 0; i < n; i++)
  {
    printf("%d\t",m[i]);
  }
  printf("\nN:\n");
  for (j = 0; j < k; j++)
  {
    printf("%d\t",p[j]);
  }
  printf("\nT:\n");
  for ( i = 0; i < l; i++)
  {
    printf("%d\t",t[i]);
  }
  return 0;
}
