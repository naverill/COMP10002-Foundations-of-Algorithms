#include <stdio.h>

#define SIZE 1000

int read_array(int A, int n);

int main(int argv, char*argv[]){
	int i, n, arraySize;
	int A[SIZE], freq[SIZE];

	arraySize = read_array(A, SIZE);

	printf("%d  values read into array\n", arraySize);

	int S[arraySize][2];

	printf("Value\tFreq")


	return 0;
}

int read_array(int A, int n){
	printf("Enter up to 1000 values, ^D to end");
	for (i=0; i<SIZE && scanf("%d", &A[i])==1; i++);
	return i;
}

int val_freq(int A, int arraySize, int S){
	int i;
	for(i=0; i<arraySize; i++){

	}

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

