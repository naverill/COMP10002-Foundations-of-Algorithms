#include <stdio.h>

int main(int argc, char*argv[]) {
	double inTemp, outTemp;
	char unit;

	printf("What is the temperature: ");
	scanf("%lf%c", &inTemp, &unit);
	
	if (unit == 'C') {
		outTemp = 9.0/5.0 * (inTemp + 32);
		unit = 'F';
		printf("The temperature is %.1fC and converts to %.1fF\n", inTemp, outTemp);
		printf("Nailed it");
	}
	else if (unit == 'F') {
		outTemp = (inTemp - 32)*(5.0/9.0);
		printf("The temperature is %.1fF and converts to %.1fC\n", inTemp, outTemp);
		printf("Nailed it");
	}
	else {
		printf("ERROR: Invalid input.");
	}
	return 0;
}