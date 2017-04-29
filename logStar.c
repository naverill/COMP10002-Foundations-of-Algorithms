#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double log_star(double n);

int main(int argv, char* argc[]){
	double n, count;
 	printf("Enter a number: ");
 	if(scanf("%lf", &n) != 1){
 		printf("Invalid Input");
 		exit(EXIT_FAILURE);
 	}
 	count = log_star(n);
 	printf("The number %f has a log* count of %f", n, count);
	return 0;
}

double log_star(double n) {
	double count;
	if (log(n)<1){
		return 1;
	}
	else {
		count+=log_star(log(n));
		
	}
	return count;
}