#include <stdio.h>
main(){
	int mois, annee;
    printf("Entrez le numero du mois (1-12) : ");
    scanf("%d", &mois);
    while (!(1<=mois && mois<=12)){
    	printf("Entrez le numero du mois (1-12) : ");
    	scanf("%d", &mois);
	}
    switch (mois)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf("Ce mois a 31 jours.\n");break;
        case 4:case 6:case 9:case 11:printf("Ce mois a 30 jours.\n");break;
        case 2:printf("Entrez l'annee : ");scanf("%d", &annee);
		if (annee % 4 == 0 && annee % 100 != 0) 
            printf("Fevrier a 29 jours (annee bissextile).\n");
        else{
        	printf("Fevrier a 28 jours.\n");
            break;
		}
}
}
