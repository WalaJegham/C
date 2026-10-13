#include <stdio.h>
main(){
	int x,y,res;
	char op;
	printf("Donner le premier opérande :");
	scanf("%d",&x);
	getchar();
	printf("Donner l'opérateur(+,*,-,/) :");
	scanf("%c",&op);
	printf("Donner le premier opérande :");
	scanf("%d",&y);
	switch (op){
		case '+':res=x+y;printf("Le résultat: %d%c%d=%d",x,op,y,res);break;
		case '*':res=x*y;printf("Le résultat: %d%c%d=%d",x,op,y,res);break;
		case '-':res=x-y;printf("Le résultat: %d%c%d=%d",x,op,y,res);break;
		case '/':printf("Le résultat: %d%c%d=%.2f",x,op,y,(float)x/y);break;
	}
}
