#include <stdio.h>
#include <stdlib.h>

int count_factors(int n);

int main(int argv, char *argc[]){
	int n;
	printf("Enter an integer: ");
	if(scanf("%d", &n)!=1){
		printf("Invalid Input");
		exit(EXIT_FAILURE);
	}
	printf("The number %d has %d factors", n, count_factors(n));
	return 0;
}

int count_factors(int n){
	int factCount=0, i;

	for(i=1; i<=n; i++){
		if(n%i==0){
			factCount++;
		}
	}
	return factCount;
}