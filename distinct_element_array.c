#include <stdio.h>
#include <stdlib.h>

#define DISTINCT 1
#define NOT_DISTINCT 0

int read_array(int A[], int num);
void print_array(int A[], int maxvals);
int find_distinct_elements(int A[], int distinct_element_array[], int maxvals);
void sort_array(int distinct_element_array[], int num_distinct);
void int_swap(int *p1, int *p2);


int main(int argc, char *argv[]){
	int num, array_size, num_distinct; 

	printf("Enter the number of inputs: ");
	if(scanf("%d", &num)!=1){
		printf("Invalid input.");
		exit(EXIT_FAILURE);
	}


	int A[num];
	array_size = read_array(A, num);

	printf("%d values read into array\n", array_size);
	printf("Before: ");
	print_array(A, array_size); 


	int distinct_element_array[array_size];

	num_distinct = find_distinct_elements(A, distinct_element_array, array_size);

	sort_array(distinct_element_array, num_distinct);

	printf("After:  ");
	print_array(distinct_element_array, num_distinct);

	return 0;
}

int read_array(int A[], int num){
	int i;
	printf("Enter up to %d numbers, ^D to exit\n", num);
	for(i=0; i<num && scanf("%d", &A[i])!=EOF; i++);
	return i;
}

void print_array(int A[], int maxvals){
	int i;
	for (i=0; i<maxvals; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

int find_distinct_elements(int A[], int distinct_element_array[], int maxvals){
	int i, j, index=0; int distinct = DISTINCT, num_distinct=0;
	for (i=0; i<maxvals; i++){
		for(j = 0; j<i; j++){
			if (A[i]==A[j]){
				distinct = NOT_DISTINCT;
			}
		}
		if(distinct==DISTINCT){
			distinct_element_array[index++] = A[i];
			num_distinct++;
		}
		distinct = DISTINCT;
	} 
	return num_distinct;
}

void sort_array(int distinct_element_array[], int num_distinct){
	int i,j;
	for(i=0; i<num_distinct; i++){
		for (j=i; j>0 && distinct_element_array[j]<distinct_element_array[j-1]; j--){
			int_swap(&distinct_element_array[j], &distinct_element_array[j-1]);
		}
	}
}

void int_swap(int *p1, int *p2){
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp; 
}