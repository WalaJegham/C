#include <stdio.h>
main(){
	int n;
	int i;
	int s=1;
	scanf("%d",&n);
	int p=n;
	/*while(n>1){
		s*=n;
		n-=1;
	}*/
	for(i=2;i<=n;i++){
		s*=i;
	}
	printf("%d!=%d",p,s);
}
