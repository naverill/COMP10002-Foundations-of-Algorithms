#include <stdio.h>

int main(int argc, char *argv[]) {
	double pound;
	double kilo;
	
	printf("Enter the weight in pounds: ");
	scanf("%lf", &pound);
	kilo = (1.0/2.2046)*pound;
	printf("The weight in kiligrams is %fkg", kilo);
	return 0;
}