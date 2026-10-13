#include <stdio.h>
main(){
	int x,s=1;
	printf("Donner un nombre");
	scanf("%d",&x);
	while(x!=0){
		s*=x;
		printf("Donner un nombre");
		scanf("%d",&x);	
	}
	printf("Le produit est :%d",s);
}
