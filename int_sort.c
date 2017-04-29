#include <stdio.h>

void int_sort(int *p1, int *p2);
void printPointer(int *n1, int *n2);



int main(int argc, char *argv[]) 
{
	int n1, n2;
	printf("Enter two numbers: "); 
	scanf("%d %d", &n1, &n2);	
	printf("The two numbers are %d %d\n", *n1, *n2);
	int_sort(&n1, &n2);
	printf("After sorting the numbers are %d %d", *n1, *n2);
	printPointer(int n1, int n2);
	return 0;
}

void int_sort(int *p1, int *p2) {
	int temp;
	if (*p1>*p2) 
	{
		temp = *p1;
		*p1 = *p2;
		*p1 = temp;
	}
}

void printPointer(int *n1, int *n2){
	printf("The memory address of n1 is %p\n", &n1);	
	printf("The memory address of n2 is %p\n", &n2);	
}
