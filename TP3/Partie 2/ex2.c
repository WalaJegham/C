#include <stdio.h>
int main(){
	int i,j,n,max,min;
	do{
		printf("Donner N: ");
		scanf("%d",&n);
	}while(!(n>1));
	int m[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("M[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	max=m[0][0];
	min=m[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(m[i][j]>max){
				max=m[i][j];
			}
			else  if(m[i][j]<min){
				min=m[i][j];
			}
		}
	}
	printf("Minimum=%d Maximum=%d",min,max);
	return 0;
}
