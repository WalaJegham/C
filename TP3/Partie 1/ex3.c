#include <stdio.h>
#define n 25
int main(){
	int t[n];int o[n];int i,j,nbocc=0;int echange=1;int aux;
	//Remplissage
	for(i=0;i<n;i++){
		do{
			printf("T[%d]=",i);
			scanf("%d",&t[i]);
		}while(!(0<=t[i]<=20));
	}
	//Affichage
	printf("Voici le contenu du tableau :\n");
	for(i=0;i<n;i++){
        printf("%d |",t[i]);
	}
	printf("\n");
	//Tri
	while(echange){
        echange=0;
        for(i=0;i<n-1;i++){
            if(t[i]>t[i+1]){
                aux=t[i];
                t[i]=t[i+1];
                t[i+1]=aux;
                echange=1;
            }
        }
        //n--;
	}
	//Tableau d'occurences
	for(i=0;i<n;i++){
        nbocc=0;
        for(j=0;j<n;j++){
            if(t[i]==t[j]){
                nbocc+=1;
            }
        }
        o[i]=nbocc;
	}
	//Affichage
	printf("Nombre d'occurences de chaque entier entre 0 et 20:\n");
	for(i=0;i<n;i++){
        printf("%d |",t[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
        printf("%d |",o[i]);
	}
	return 0;

}
