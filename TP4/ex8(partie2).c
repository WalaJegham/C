#include <stdio.h>
void saisir(int *n){
  do
  {
    printf("Donner N:");
    scanf("%d",n);
  } while (*n<2);
}
void saisir_mat(int *m,int n){
  int *p;
  int i,j;
  for ( p = m; p < m+n*n; p++)
  {
    i=(p-m)/n;
    j=(p-m)%n;
    if (i==j){
      *p=1;
    }
    else{
      *p=0;
    }
  }
}
void affiche(int *m,int n){
  int *p;
  for(p=m;p<m+n*n;p++){
    printf("%d |",p);
    if((p-m)%n==0){
      printf("\n");
    }
  }
}
int main(){
  int n;
  saisir(&n);
  int m[n][n];
  saisir_mat(m,n);
  affiche(m,n);
}