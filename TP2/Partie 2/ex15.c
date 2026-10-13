#include <stdio.h>
main(){
	int i;
	printf("les consonnes sont :");
	for(i=98;i<=122;i++){
		if(!((char)i=='e' || (char)i=='o' || (char)i=='u' || (char)i=='i' || (char)i=='u' ||(char)i=='y')){
			printf("%c",i);
		}
	}
}
