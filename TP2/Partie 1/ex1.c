#include <stdio.h>
main(){
	int nbr;
	printf("Donner un entier :");
	scanf("%d",&nbr);
	if(nbr<0){
		printf("le nombre %d est négatif",nbr);
	}
	else{
		if(nbr>0){
			printf("le nombre %d est positif",nbr);
		}
		else{
			printf("le nombre %d est nul",nbr);
		}
	}
}
