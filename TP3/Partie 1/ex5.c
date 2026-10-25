#include <stdio.h>
int main(){
    int ta[20],tb[20],p,q,j,i;int sous=0;
    do{
        printf("Donner p : ");
        scanf("%d",&p);
    }while(!(3<=p<=20));
    do{
        printf("Donner q : ");
        scanf("%d",&q);
    }while(!(3<=q<=20));
    for(i=0;i<p;i++){
        printf("Ta[%d]",i);
        scanf("%d",&ta[i]);
    }
     for(i=0;i<q;i++){
        printf("Tb[%d]",i);
        scanf("%d",&tb[i]);
    }
    printf("Tableau Ta: ");
    for(i=0;i<p;i++){
        printf("%d |",ta[i]);
    }
    printf("\nTableau Tb: ");
    for(i=0;i<q;i++){
        printf("%d |",tb[i]);
    }
    if(p<q){
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                if(ta[i]==tb[j]){
                    sous+=1;
                }
            }
        }
    }
    else{
        for(i=0;i<q;i++){
            for(j=0;j<p;j++){
                if(tb[i]==ta[j]){
                    sous+=1;
                }
            }
        }
    }
    if(sous==p){
        printf("Resultat Ta est un sous tableau de Tb");
    }
    else if(sous==q){
        printf("Resultat Tb est un sous tableau de Ta");
    }
    else{
        printf("Pas de sous tableau");
    }
    return 0;
}
