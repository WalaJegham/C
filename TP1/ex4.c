#include <stdio.h>
int main(){
    float pi=3.14;
    float d;float p;float s;
    printf("Donner le diametre :");
    scanf("%f",&d);
    p=pi*d;
    s=(d/2.0)*(d/2.0)*pi;
    printf("LE PERIMETRE EST : %.2f ET LA SURFACE EST : %.2f",p,s);
}