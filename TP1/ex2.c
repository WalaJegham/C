#include <stdio.h>
int main(){
    int x,y;
    printf("Donner x:");
    scanf("%d",&x);
    printf("Donner y:");
    scanf("%d",&y);
    float moy=(x+y)/2.0;
    printf("Resultat: %.2f",moy);
}