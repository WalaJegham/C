#include <stdio.h>
void main(){
    char c1;
    char c2;
    char aux;
    printf("Donner un caractere c1:");
    scanf("%c",&c1);
    printf("Donner un caractere c2:");
    scanf(" %c",&c2);
    aux=c1;
    c1=c2;
    c2=aux;
    printf("c1 devient %c et c2 devient %c",c1,c2);

}