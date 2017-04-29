/* Explore the 3n+1 problem.
*/
#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[]) {

	int n, cycles, max, nmax, i;
	int cycleMax=0, seedMax;
	
	/* a value for n has been read */

	
	printf("Enter a maximum value for n:");
	if (scanf("%d", &nmax)!=1) {
		printf("Incorrect input\n");
		exit(EXIT_FAILURE);
	}
	for (i=nmax; i>1; i--){
		max = n = i;
		cycles = 0;
		while (n>1) {
			if (n%2==0) {
				n = n/2;
			} 
			else {
				n = 3*n+1;
			}
			if (n>max) {
				max = n;
			}
			cycles += 1;
		if (cycles>cycleMax){
			cycleMax = cycles;
			seedMax = i;
		}
		}
	}
	printf("The largest cycle was %d numbers long, with a starting value of %d\n",
			cycleMax, seedMax);
	return 0;
}