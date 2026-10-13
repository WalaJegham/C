#include <stdio.h>
main(){
	int n, i, j;
    do {
        printf("Donnez un entier positif n : ");
        scanf("%d", &n);
    } while (n <= 0);
    //Partie Haute
    for(i=1;i<=n/2;i++){
    	for(j=1;j<=n-i-1;j++){
    		printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
    
    //Partie Basse
	for(i=n/2;i<=n;i++){
		for(j=1;j<=n-i-1;j++){
			printf(" ");
		}
		for(j=n-i-1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
