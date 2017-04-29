#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]){
	int n, i, j;
	printf("Enter an integer: ");
	if(scanf("%d", &n)!=1){
		printf("Invalid input");
		exit(EXIT_FAILURE);
	}
	for (i=1; i<=n; i++){
		for(j=0;j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}