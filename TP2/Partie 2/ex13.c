#include <stdio.h>
main(){
	int n,s,aux;
	printf("Donner un entier positif :");
	scanf("%d",&n);
	while(n<=0){
		printf("Donner un entier positif :");
		scanf("%d",&n);
	}
	aux=n;
	s=0;
	while(n!=0){
		s+=n%10;
		n/=10;
	}
	printf("La somme des chiffres de %d est:%d",aux,s);
}
