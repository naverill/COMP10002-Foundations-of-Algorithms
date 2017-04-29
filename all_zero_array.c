#include <stdio.h>

int all_zero(int A[], int n);

int main(int argv, char *argc[]) {
	int i, n;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int A[n];

	printf("Input array values: ");
	for (i=0; i<n && scanf("%d", &A[i])==1; i++);
	if(all_zero(A, n)){
		printf("All elements in the array are zero");
	}
	else{
		printf("\n Not all elements in the array are zero");
	}
	return 0;
}


int all_zero(int A[], int n) {
	int i;
	for (i=0; i<n; i++){
		if(A[i]!=0){
			return 0;
		}
	}
	return 1; 
}