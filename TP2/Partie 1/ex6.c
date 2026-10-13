#include <stdio.h>
main(){
	float t;
	printf("Donner La température :");
	scanf("%f",&t);
	if(t<=0.0){
		printf("Glace");
	}
	else if(0<t<=100){
		printf("Eau");
	}
	else{
		printf("Vapeur");
	}
	//On ne peut pas utiliser "switch" car t est un float qui demande une expression
}
