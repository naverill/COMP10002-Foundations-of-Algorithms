#include <stdio.h>

int read_array(int A[], int n);
void print_array(int A[], int n);
int ascending_runs(int A[], int n);


int main(int argv, char **argc){
	int n, arraySize;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int A[n];

	arraySize = read_array(A, n);
	printf("%d values read into array\n", arraySize);
	print_array(A, arraySize);
	printf("The number of ascending runs in the array is %d\n", ascending_runs(A, arraySize));
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
	for(i=0; i<n; i++){
		printf("%d\t", A[i]);
	}
	printf("\n");
}

int ascending_runs(int A[], int n){
	int in_run=1, i, runCount=0; 

	for(i=0; i<n-1; i++){
		if(A[i]<=A[i+1]){
			in_run=1;
		}
		if (A[i]>A[i+1] && in_run==1){
			in_run=0;
			runCount+=1;
		}
	}
	runCount++;
	return runCount;
}