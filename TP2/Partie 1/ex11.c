#include <stdio.h>
main(){
	int x,x1,x2;
	float s=0.0;
	printf("Donner le  nombre de photocopies :");
	scanf("%d",&x);
	if(x>=10){
		s+=10*0.15;
		x-=10;
		if(x>=20){
			s+=20*0.1;
			x-=20;
			if(x>0){
				s+=x*0.075;
			}
		}
	}
	printf("Le prix sera : %.2f",s);
}
