#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	int notPrime = 0;
	int divisor;
	int divisor2;
	printf("Please enter a number: ");
	scanf("%d", &num);
	if (num==1) {
		notPrime=1;
	}	
	else {
		for (divisor=2; divisor*divisor<=num; divisor++) {
			if (num%divisor == 0) {
				notPrime = 1;
				divisor2 = num/divisor;
				break;
			}
		}
	}
	if (notPrime==1) {
		printf("%d = %d * %d\nTherefore %d is not a prime number", num, divisor, divisor2, num);

	}
	else {
			printf("The number %d is a prime number", num);
	}
	return 0;
}