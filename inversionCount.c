#include <stdio.h>

int read_array(int A[], int n);
void print_array(int A[], int n)
int inversion_count(int A[], int n);


int main(int argv, char *argc[]){
	int n, arraySize, inv_count;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int A[n];
	arraySize = readArray(A, n);
	printf("%d values read into array", arraySize);
	print_array(A, arraySize);

	inv_count = inversion_count(A, n);
	printf("The number of inversions in the array is %d", inv_count);

	return 0;
}

int read_array(int A[], int n){
	int i;

	printf("Enter up to %d values, ^D to end.\n", n);
	for(i=0; i<n && scanf("%d", &A[i])==1; i++);
	return i;
}

void print_array(int A[], int n){
	int i;

	for (i=0; i<n; i++){
		printf("%d\t", A[i]);
	}
	printf("\n");
}


int inversion_count(int A[], int n){
	int i, j, inv_count;

	for (i=1; i<n-1 && A[i]>A[i+1], i++){
		j=i;
		while(A[i+1]>A[j]){
			inv_count++;
			j--;
		}

	}
	return inv_count;
}