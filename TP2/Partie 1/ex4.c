#include <stdio.h>
main(){
	float a,b;
	float sol;
	printf("Donner a:");
	scanf("%f",&a);
	printf("Donner b:");
	scanf("%f",&b);
	sol=-b/a;
	printf("la solution de %.2f(X)+(%.2f) est :%.2f",a,b,sol);
}
