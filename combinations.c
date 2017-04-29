#include <stdio.h>

int factorial(int num);
int n_choose_k(int n, int k);

int main(int argc,char *argv[]){
	int n, k;
	printf("Enter the total number of items: ");
	scanf("%d", &n);
	printf("Enter the number of items selected: ");
	scanf("%d", &k);
	printf("The number of possible combinations is %d", n_choose_k(n, k));
	return 0;
}

int factorial(int num){
	if (num==1){
		return 1;
	}
	return num*factorial(num-1);
}

int n_choose_k(int n, int k){
	int comb, n_fact, k_fact, n_minus_k_fact;
	n_fact = factorial(n);
	k_fact = factorial(k);
	n_minus_k_fact = factorial(n-k);

	comb = n_fact/(k_fact*n_minus_k_fact);
	return comb;
}
