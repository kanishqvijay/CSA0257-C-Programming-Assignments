#include <stdio.h>

void main(){
	int n,i,j,k;
	printf("Enter n:");
	scanf("%d",&n);
	for (i = 1; i <= n; i++){
		for (k = 0; k <n-i;k++){
				printf(" ");
			}
		for (j = 1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
}