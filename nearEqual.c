#include <stdio.h>
#include <stdlib.h>

int near_equal(double x1, double x2);

int main(int argv, char *argc[]){
	double x1, x2;
	int bool;
	
	printf("Enter two numbers: ");
	scanf("%lf %lf", &x1, &x2);
	bool = near_equal(x1, x2);
	if (bool==1){
		printf("True");
	}
	else {
		printf("False");
	}
	return 0;
}

int near_equal(double x1, double x2){
	if (0<=abs(x1-x2)&& abs(x1-x2)<0.00001){
		return 1;
	}
	return 0;
}