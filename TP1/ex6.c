#include <stdio.h>

/*int main() {
    int a, b, c, d, somme;

    printf("Entrez 4 nombres entiers :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    somme = a + b + c + d;

    printf("La somme est : %d\n", somme);
    return 0;
}*/
int main() {
    int nombre, somme;

    printf("Entrez 4 nombres entiers :\n");

    scanf("%d", &nombre);
    somme = nombre;

    scanf("%d", &nombre);
    somme = somme + nombre;

    scanf("%d", &nombre);
    somme = somme + nombre;

    scanf("%d", &nombre);
    somme = somme + nombre;

    printf("La somme est : %d\n", somme);
    return 0;
}