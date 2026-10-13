#include <stdio.h>
int main(){
    int i,n,s1=0,s2=0,s3=0,s4=0;
    do{
        printf("Donner N: ");
        scanf("%d",&n);
    }while(!(n>2));
    float t[n];
    for(i=0;i<n;i++){
    	printf("T[%d]=",i);
    	scanf("%f",&t[i]);
	}
	for(i=0;i<n;i++){
		if(t[i]>=8.0 && t[i]<10.0){s1+=1;}
		else if(t[i]>=10.0 && t[i]<12.0){s2++;s1++;}
		else if(t[i]>=12.0 && t[i]<15){s3++;s1++;s2++;}
		else if(t[i]>=15.0){s4++;s1++;s2++;s3++;}
	}
	printf("Nombre d'etudiants qui ont une moyenne superieur a 8: %d\n",s1);
	printf("Nombre d'etudiants qui ont une moyenne superieur a 10: %d\n",s2);
	printf("Nombre d'etudiants qui ont une moyenne superieur a 12: %d\n",s3);
	printf("Nombre d'etudiants qui ont une moyenne superieur a 15: %d\n",s4);
	return 0;
}
