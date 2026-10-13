#include <stdio.h>
int main(){
    int t1[20],t2[20],m,n,i,x;
    do{
        printf("Donner la taille de T1: ");
        scanf("%d",&n);
    }while(n<=0);
    do{
        printf("Donner la taille de T2: ");
        scanf("%d",&m);
    }while(m<=0 || m>n);
    for(i=0;i<n;i++){
        printf("T1[%d]",i);
        scanf("%d",&t1[i]);
    }
     for(i=0;i<m;i++){
        printf("T2[%d]",i);
        scanf("%d",&t2[i]);
    }
    printf("T1 : ");
    for(i=0;i<n;i++){
        printf("%d ",t1[i]);
    }
    printf("\n");
    printf("T2 : ");
    for(i=0;i<m;i++){
        printf("%d ",t2[i]);
    }
    printf("\n");
    do{
        printf("Donner un indice a chercher ses diviseurs :");
        scanf("%d",&x);
    }while(x<0 || x>n);
    printf("Les Diviseurs sont : ");
    for(i=0;i<m;i++){
        if(t1[x-1]%t2[i]==0){
            printf("%d ",t2[i]);
        }
    }
    return 0;
}
