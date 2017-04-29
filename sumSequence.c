#include <stdlib.h>
#include <stdio.h>

double sum_sequence(int n);

int main(int argc, char *argv[]){
	int n;
	printf("Enter a number: ");
	if (scanf("%d", &n)!=1){
		printf("Invalid input");
		exit(EXIT_FAILURE);
	}
	printf("%f", sum_sequence(n));
	return 0;
}

double sum_sequence(int n){
	double totalSum=0;
	double sum=0, product=1, i;
	for (i=1; i<=n; i++){
		sum+=i;
		product*=i;
		totalSum+= sum/product;
	}
	return totalSum;
}