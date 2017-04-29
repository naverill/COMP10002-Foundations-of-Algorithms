#include <stdio.h>

void insertion_sort(int A[], int n);
void print_array(int A[], int n);
void int_swap(int *p1, int *p2);
int read_array(int A[], int n);


int main(int argv, char *argc[]){
	int num, n;
	

	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int A[n];
	num = read_array(A, n);
	
	printf("\n%d values read into array\n", sizeof(A)/sizeof(int));
	printf("%d values read into array\n", num);

	
	printf("\nBefore sorting: ");
	print_array(A, n);

	insertion_sort(A, n);

	printf("After sorting:  ");
	print_array(A, n);

	return 0;
}

int read_array(int A[], int n){
	int i;

	printf("Input array values: ");
	for(i=0; i<n && scanf("%d", &A[i])==1; i++);
	return i;
}

void insertion_sort(int A[], int n) {
	int i,j;
	for (i=1; i<n; i++){
		for(j=i-1; j>=0 && A[j+1]>A[j]; j--){
			int_swap(&A[j], &A[j+1]);
		}
	}
}

void print_array(int A[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\t", A[i]);
	}
	printf("\n");
}

void int_swap(int *p1, int *p2){
	int temp;
	temp = *p1;
	*p1=*p2;
	*p2 = temp;
}