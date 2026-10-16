#include <stdio.h>
int main(){
	int n,i,j;
	do{
		printf("Donner N: ");
		scanf("%d",&n);
	}while(!(n>2));
	char m[n][n],t[n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("M[%d][%d]=",i,j);
			scanf(" %c",&m[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c |",m[i][j]);
		}
		printf("\n");
	}
	int	x=0;
	i=0;
	while(i<n){
		for(j=0;j<n;j++){
			t[x]=m[i][j];
			x++;
		}
		i++;
	}
	for(i=0;i<x;i++){
		printf("%c |",t[i]);
	}
	return 0;
}
