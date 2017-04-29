#include <stdio.h>
#include <stdlib.h>

int max_two_ints(int num1, int num2);

int main(int argv, char* argc[]){
	int num1, num2, num3, num4, max_num;
	
	printf("Enter four numbers: ");
	if(scanf("%d%d%d%d", &num1, &num2, &num3, &num4)!=4) {
		printf("Incorrect inputs");
		exit(EXIT_FAILURE);
	}
	max_num = max_two_ints(max_two_ints(num1, num2), max_two_ints(num4, num3));
	printf("The largest number is %d", max_num);
	return 0;
}


int max_two_ints(int num1, int num2) {
	if (num1>=num2){
		return num1;
	}
	return num2;
}