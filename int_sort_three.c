#include <stdio.h>

void int_sort_three(int* p1, int* p2);



int main(int argc, char *argv[]) 
{
	int n1, n2, n3;
	printf("Enter three numbers: "); 
	scanf("%d %d %d", &n1, &n2, &n3);	
	printf("The three numbers are %d %d %d\n", *n1, *n2, *n3);
	int_sort_three(&n1, &n2, &n3);
	printf("After sorting the numbers are %d %d %d", *n1, *n2, *n3);
	return 0;
}



void int_sort_three(int* p1, int* p2, int* p3) {
	int temp;
	if (*p1>*p2) 
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
	if (*p2>*p3) 
	{
		temp = *p2;
		*p2 = *p3;
		*p3 = temp;
	}
}