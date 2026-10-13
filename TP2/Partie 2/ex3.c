#include <stdio.h>
main(){
	int i,x,y,s=0;
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		s+=x;
	}
	printf("%dx%d=%d",x,y,s);
}
