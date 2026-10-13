#include <stdio.h>
main(){
	int i,j,n,s1=0,s2=0;
	do{
		printf("Donner N: ");
		scanf("%d",&n);
	}while(!(n>1));
	int m[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("M[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d |",m[i][j]);
		}
		printf("\n");
	}
	
	//diagonale gauche
	printf("Diagonale Gauche\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				s1+=m[i][j];
				printf("%d |",m[i][j]);
			}
		}
	}
	//diagonale droite
	printf("\n Diagonale Droite\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(n-i-1==j){
				s2+=m[i][j];
				printf("%d |",m[i][j]);
			}
		}
	}
	printf("\n");
	printf("Somme droite:%d Somme gauche:%d",s1,s2);
}
