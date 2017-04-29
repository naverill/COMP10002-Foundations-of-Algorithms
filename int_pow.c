#include <stdlib.h>
#include <stdio.h>

int int_pow(int base, int exponent);

int main(int argv, char *argc[]){
	int base, exponent, num;
	
	printf("Enter two numbers: ");
	if (scanf("%d%d", &base, &exponent)!=2) {
		printf("Invalid input.");
		exit(EXIT_FAILURE);
	}
	num = int_pow(base, exponent);
	printf("%d", num);
	return 0;
}

int int_pow(int base, int exponent){
	if (exponent==1){
		return base;
	}
	else{
		return base*(int_pow(base, exponent-1));
	}
}