#include <stdio.h>
#include <stdlib.h>

int read_array(int A[], int maxvals);
void reverse_array(int A[], int n);
void array_swap(int *p1, int *p2);
void print_array(int A[], int n);


int main() {
    int n, arraySize;
    printf("Enter the number of inputs: ");
    if (scanf("%d", &n)!=1){
        printf("Invalid input.");
        exit(EXIT_FAILURE);
    }
    
    int A[n];
    
    arraySize = read_array(A, n);
    
    reverse_array(A, arraySize);
    
    print_array(A, arraySize);
    
    return 0;
}

int read_array(int A[], int maxvals){
    int i=0;
    printf("Enter as many as %d values, ^D to end\n", maxvals);
    
    for(i=0; i<maxvals && scanf("%d", &A[i])==1; i++); 
    return i;
}


void reverse_array(int A[], int n){
    int i;
    for(i=0; i<n/2; i++){
        array_swap(&A[i], &A[n-i-1]);
    }
}

void array_swap(int *p1, int *p2){
    int temp;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void print_array(int A[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}