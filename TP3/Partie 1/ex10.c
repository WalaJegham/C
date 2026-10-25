#include <stdio.h>
int main(){
	int t[5],i,echange=1,aux;
	//Tri Insertion
	printf("Donner T[0] :");
	scanf("%d",&t[0]);
	for(i=1;i<5;i++){
		do{
			printf("T[%d]=",i);
			scanf("%d",&t[i]);
		}while(t[i]<t[i-1]);
	}
	//tri a bulle
	int n=5;	
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
     	n--;
	}
	//Tri Shell
	
	return 0;
}
