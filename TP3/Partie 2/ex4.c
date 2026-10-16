#include <stdio.h>
int main(){
	int i,j,n,sym=1;
	do{
		printf("Donner N: ");
		scanf("%d",&n);
	}while(!(n>2));
	char m[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("M[%d][%d]=",i,j);
			scanf(" %c",&m[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(m[i][j]!=m[j][i]){
				sym=0;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c |",m[i][j]);
		}
		printf("\n");
	}
	if(!sym){
		printf("Matrice asymetrique");
	}
	else{
		printf("Matrice symetrique");
	}
	return 0;
}
