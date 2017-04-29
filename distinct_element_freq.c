/*OTHER METHOD: Sort array in ascending order so that all non-distinct elements are together,
iterare through and count freq every time new element is registered (probs faster runtime */


#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000
#define DISTINCT 1
#define NOT_DISTINCT 0
#define COLS 2

int read_array(int num_array[], int maxvals);
void print_2d_array(int freq_count[][COLS], int num_distinct);
int find_distinct_elements(int A[], int freq_count[][COLS], int maxvals);
void sort_array(int freq_count[][COLS], int num_distinct);
void int_swap(int *p1, int *p2);

int main(int argc, char **argv){
	int array_size, i, j, num_distinct;

	int num_array[MAX_SIZE];

	array_size = read_array(num_array, MAX_SIZE);
	printf("%d values read into array", array_size);

	int freq_count[array_size][COLS]; 

	num_distinct = find_distinct_elements(num_array, freq_count, array_size);

	sort_array(freq_count[][COLS], num_distinct);

	for(i=0; i<num_distinct; i++){
		for (j=0; j<array_size; j++){
			if(freq_count[i][0]==num_array[j]){
				freq_count[i][1]++;
			}
		}
	}
	printf("Value\tFreq");
	print_2d_array(freq_count, num_distinct);

	return 0;  
}

int read_array(int num_array[], int maxvals){
	int i;
	printf("Enter as many as 1000 values, ^D to end");
	for(i=0; i<maxvals && scanf("%d", &num_array[i])!=0; i++);

	return i;
}

void print_2d_array(int freq_count[][COLS], int num_distinct){
	int i, j;
	for(i=0; i<num_distinct; i++){
		for(j=0; j<COLS; j++){
			printf("%-4d", freq_count[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}

int find_distinct_elements(int A[], int freq_count[][COLS], int maxvals){
	int i, j, index=0; int distinct = DISTINCT, num_distinct=0;
	for (i=0; i<maxvals; i++){
		for(j = 0; j<i; j++){
			if (A[i]==A[j]){
				distinct = NOT_DISTINCT;
			}
		}
		if(distinct==DISTINCT){
			freq_count[index++][0] = A[i];
			num_distinct++;
		}
		distinct = DISTINCT;
	} 
	return num_distinct;
}

void sort_array(int freq_count[][COLS], int num_distinct){
	int i,j;
	for(i=0; i<num_distinct; i++){
		for (j=i; j>0 && freq_count[j]<freq_count[j-1]; j--){
			int_swap(&freq_count[j][0], &freq_count[j-1][0]);
		}
	}
}

void int_swap(int *p1, int *p2){
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp; 
}
