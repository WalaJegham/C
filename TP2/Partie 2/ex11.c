#include <stdio.h>
main(){
	int n,i;
	printf("donner le n-iéme terme:");
	scanf("%d",&n);
	float u=1.0;
	for(i=2;i<=n;i++){
		u+=1.0/i;
	}
	printf("%.3f",u);
}
