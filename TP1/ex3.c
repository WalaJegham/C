#include <stdio.h>
int main(){
    long date;
    printf("Donner un entier de 8 chiffres : ");
    scanf("%ld", &date);
    int j=date/1000000;
    int m=(date/10000)%100;
    int an=date%10000;
    printf("jour : %02d \nmois : %02d\nannée : %d",j,m,an);
}