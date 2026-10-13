#include <stdio.h>
main(){
	int x;
	printf("Donner un jour de la semaine(1-7) :");
	scanf("%d",&x);
	while !(1<=x<=7){
		printf("Donner un jour de la semaine(1-7) :");
		scanf("%d",&x);
	}
	if(&<=x<=5){
		printf("Il y a cours");
	}
	else if(x==6){
		printf("il y a devoir surveillé");
	}
	else{
		printf("On se repose");
	}
}
