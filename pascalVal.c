#include <stdlib.h>
#include <stdio.h>

int factorial(int n);

int main(int argv, char *argc[]){
	int n, k, comb;

	printf("Enter the row number, staring at 0: ");
	if (scanf("%d", &n)!=1 || k<0){
		printf("Invalid input,");
			exit(EXIT_FAILURE);
	}
	printf("Enter the column number, staring at 0: ");
	if (scanf("%d", &k)!=1 || k<0){
		printf("Invalid input,");
			exit(EXIT_FAILURE);
	}
	comb = factorial(n)/(factorial(n-k)*factorial(k));
	printf("the positions value in pascals triangle is %d.", comb);
	return 0;
}

 int factorial(int n){
 	if (n==1){
 		return 1;
 	}
 	else{
 		return n*factorial(n-1);
 	}
 }