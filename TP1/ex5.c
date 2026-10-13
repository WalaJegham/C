#include <stdio.h>
int main(){
    const float ech=3.38;
    float m;
    puts("Donner un montant en dinars : ");
    scanf("%f",&m);
    printf("Votre montant est : %.2f €",m/ech);
}