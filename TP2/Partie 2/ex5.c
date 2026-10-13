#include <stdio.h>
main(){
	int i,n;
	printf("Donner un entier :");
	scanf("%d",&n);
	for(i=0;i<10;i++){
		printf("%dx%d=%d",n,i,n*i);
	}
}
