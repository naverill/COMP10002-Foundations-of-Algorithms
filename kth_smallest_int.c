#include <stdio.h>
#include <stdlib.h>

int kth_num(int A[], int n, int k);
int read_array(int A[], int n);

int main(int argv, char **argc){
	int n, arraySize, k;

	printf("Enter the array size: ");
	scanf("%d", &n);

	int A[n];
	arraySize = read_array(A, n);

	printf("Enter the k'th smallest integer to locate: ");
	scanf("%d", &k);

	kNum = kth_num(A, arraySize, k);
	printf("The %d'th smallest integer in the array is %d", k, kNum);
	return 0;
}

int read_array(int A[], int n){
	int i;

	printf("Enter up to %d values\n", n);
	for (i=0; i<n && scanf("%d", &A[i])==1; i++);
		return i;
}

int kth_num(int A[], int n, int k){
	
	int i, j, smaller, equal;
	/* try elements one by one, until find one that
	   has <= k smaller, and > k smaller+equal
	*/
	for (i=0; i<n; i++) {
		smaller = equal = 0;
		for (j=0; j<n; j++) {
			smaller += (A[j]<A[i]);
			equal += (A[j]==A[i]);
		}
		if (smaller<=k && k<smaller+equal) {
			return A[i];
		}
	}
	/* if reach this point, something is wrong! */
	printf("No %d'th smallest possible in array of %d items\n",
		k, n);
	exit(EXIT_FAILURE);
}