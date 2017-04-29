#include <stdio.h>

int freq_val(int A[], int n);
int read_array(int A[], int n);





int main(int argv, char **argc){
	int n, arraySize, maxNum;

	printf("Enter the size of the array: ");
	scanf("%d", &arraySize);
	int A[arraySize];

	n = read_array(A, arraySize);
	maxNum = freq_val(A, n);
	printf("The most frequent value is %d", maxNum);

	return 0;
}






int read_array(int A[], int n){
	int i;
	printf("Enter up to %d values: ", n);
	for(i=0; i<n && scanf("%d", &A[i])==1; i++);
	return i;
}

int freq_val(int A[], int n){
	int i,j, maxFreq=0, maxFreqNum;

	for (i=0; i<n; i++){
		int valFreq=0;
		for(j=0; j<n; j++)
			if (A[i]==A[j] && A[i]!=maxFreqNum){
				valFreq++;
			}
		if(valFreq>maxFreq){
			maxFreq=valFreq;
			maxFreqNum=A[i];
		}
		else if(valFreq==maxFreq && A[i]<maxFreqNum){
				maxFreqNum=A[i];
		}
	}
	return maxFreqNum;
}