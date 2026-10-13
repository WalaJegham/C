#include <stdio.h>
main(){
	int i,x,min,max,somme;
	float moy;
	printf("Donner nombre 1 :");
	scanf("%d",&x);
	min=x;
	max=x;
	somme=x;
	for(i=2;i<=20;i++){
		printf("Donner le nombre %d :",i);
		scanf("%d",&x);
		somme+=x;
		if(x>max){max=x;}
		if(x<min){min=x;}		
	}
	moy=somme/20;
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	printf("somme = %d\n",somme);
	printf("moyenne = %.2f\n",moy);
}
