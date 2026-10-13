#include <stdio.h>
main(){
	int j,m,a;
	char *x;//Dans char *x;, l'étoile * signifie que x est l'adresse mémoire où se trouve un caractère.
	printf("Donner le jour :");
	scanf("%d",&j);
	printf("Donner le mois :");
	scanf("%d",&m);
	printf("Donner l'année :");
	scanf("%d",&a);
	while(j>31 || m>12){
		printf("Donner le jour :");
		scanf("%d",&j);
		printf("Donner le mois :");
		scanf("%d",&m);
		printf("Donner l'année :");
		scanf("%d",&a);
		}
	switch(m){
		case 1: x="Janvier";break;
		case 2: x="Février";break;
		case 3: x="Mars";break;
		case 4: x="Avril";break;
		case 5: x="Mai";break;
		case 6: x="Juin";break;
		case 7: x="Juillet";break;
		case 8: x="Aout";break;
		case 9: x="Septembre";break;
		case 10: x="Octobre";break;
		case 11: x="Novembre";break;
		case 12: x="Decembre";break;
	}
	printf("La Date est: le %d %s %d",j,x,a);
}
	
