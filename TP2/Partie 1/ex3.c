#include <stdio.h>
#include <math.h>
main(){
	int c,n1,n2,n3,s;
	printf("Donner un nombre de 3 chiffres :");
	scanf("%d",&c);
	while(c<100){
		printf("Donner un nombre de 3 chiffres");
		scanf("%d",&c);
	}
	n1=c/100;
	n2=(c%100)/10;
	n3=c-n1*100-n2*10;
	s=pow(n1,3) + pow(n2,3) + pow(n3,3);
	if(s == c){
		printf("Le nombre %d est cubique",c);
	}
	else{
		printf("Le nombre %d est non cubique",c);
	}
}
