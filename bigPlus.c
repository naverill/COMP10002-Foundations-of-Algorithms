#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void plus(int n);

int main(int argc, char *argv[]){
	int n;

	printf("Enter a number between 1 and 10: ");
	if (scanf("%d", &n)!=1){
		printf("Invalid Input");
		exit(EXIT_FAILURE);
	}
	else if (n<0 || n>MAX){
		printf("Must be between 0 and 10.");
		exit(EXIT_FAILURE);
	}
	plus(n);
	return 0;
}

void plus(int n){
	int i, j, k;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
		printf("  ");
		}
		printf("+\n");
	}
	for (k=0; k<2*n-1;k++){
		printf("+ ");
	}
	printf("\n");
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
		printf("  ");
		}
		printf("+\n");
	}
}