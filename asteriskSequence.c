#include <stdio.h>

int main(int argc, char *argv[]) {
	int num, i=0;
	printf("Enter numbers: ");
	while (scanf("%d", &num) && num != EOF) {
		printf("%d |\t", num); 
		while (i<num) {
			printf("*");
			i++;
		}
		printf("\n");
		i=0;
	}
}