#include <stdio.h>
int main(){
	int x;
	printf("Donner un entier :");
	scanf("%d",&x);
	if(sommediv(x)==x){
		printf("%d est un nombre parfait",x);
	}
	else{
		printf("%d n'est pas un nombre parfait",x);
	}
	return 0;
}
int sommediv(int x){
	int s=0;
	int i;
	for(i=1;i<=x/2;i++){
		if(x%i==0){s+=i;
		}
	}
	return s;
}
