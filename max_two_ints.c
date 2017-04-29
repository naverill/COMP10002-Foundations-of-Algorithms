#include <stdio.h>
#include <stdlib.h>

int max_two_ints(int num1, int num2);

int main(int argv, char* argc[]){
	int num1, num2, max_num;
	
	printf("Enter two numbers: ");
	if(scanf("%d%d", &num1, &num2)!=2) {
		printf("incorrect inputs");
		exit(EXIT_FAILURE);
	}
	max_num = max_two_ints(num1, num2);
	printf("The larger number is %d", max_num);
	return 0;
}


int max_two_ints(int num1, int num2) {
	if (num1>=num2){
		return num1;
	}
	else {
		return num2;
	}
}