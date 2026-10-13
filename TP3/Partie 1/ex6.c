#include <stdio.h>
int main(){
	int m,n,i,j;
	do{printf("Donner la taille de M: ");
	scanf("%d",&m);
	}while(!(m>0));
	do{printf("Donner la taille de N: ");
	scanf("%d",&n);
	}while(!(n>0));
	int M[m],N[n];
	for(i=0;i<m;i++){
		printf("Donner M[%d]=",i);
		scanf("%d",&M[i]);
	}
	for(i=0;i<n;i++){
		printf("Donner N[%d]=",i);
		scanf("%d",&N[i]);
	}
	int F[m+n];
	i=0;j=0;
	while(i<m){
        F[i]=M[i];
        i++;
	}
	while(i<m+n){
        F[i]=N[j];
        i++;j++;
	}
	for(j=0;j<n+m;j++){
        printf("%d |",F[j]);
	}
    return 0;
}
