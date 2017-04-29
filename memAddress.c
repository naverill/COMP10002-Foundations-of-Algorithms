#include <stdio.h>

int *new_integer();

int main(int argc, char *argv[]) {
	int* memAddress = new_integer();
	printf("%d", &n); 
	/*NOTE: Cannot return address of local new_integer variable, as it is 
	deleted after new_integer exits*/ 
	return 0;
}


int *new_integer() {
	int n;
	return &n;
}