#include <stdio.h>
main(){
	int n1,n2;
	printf("donner n1 :");
	scanf("%d",&n1);
	printf("donner n2 :");
	scanf("%d",&n2);
	if(n1*n2>=0){
		printf("n1 et n2 sont de meme signe donc leur multipication est(+)");
	}
	else{
		printf("n1 et n2 sont de meme signe donc leur multipication est(-)");
	}
}
