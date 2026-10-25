#include <stdio.h>
void saisir_n(int *n){
    do{
    printf("Donner N:");
    scanf("%d",n);
  }while(*n<2);
}
void remplir_t(int *t,int n){
  int *p;
  for ( p = t; p < n+t; p++)
  {
    printf("T[%d]=",p-t);
    scanf("%d",p);
  }
  
}
void affiche(int *t,int n){
  int *p;
  for ( p = t;p < n+t; p++)
  {
    printf("%d\t",*p);
  }
}
void saisir_x(int *x){
  do
  {
    printf("Donner x:");
    scanf("%d",x);
  } while (!(*x<100 && *x>0 ));
}
void remplir_tt(int *t,int *t1,int *t2,int n,int x,int *n1,int *n2){
  int *p;
  for ( p = t; p <t+n; p++)
  {
    if (*p<x)
    {
      *t1++=*p;
      *n1+=1;
    }
    else
    {
      *t2++=*p;
      *n2+=1;
    }
  }
}
int main(){
  int n,x,n1=0,n2=0;
  saisir_n(&n);
  int t[n],t1[n],t2[n];
  remplir_t(t,n);
  affiche(t,n);
  printf("\n");
  saisir_x(&x);
  remplir_tt(t,t1,t2,n,x,&n1,&n2);
  affiche(t1,n1);
  printf("\n");
  affiche(t2,n2);
}