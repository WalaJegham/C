#include <stdio.h>
#include <math.h>
main(){
	float eps=0.00001;
	int k=3,signe=-1;
	float u=1;
	float x=signe/k;
	while(fabs(u-x)>eps){
		x=u;
		signe*=(-1);
		k+=2;
		u+=signe/k;
	}
	printf("pi=%f",4*u);
}
