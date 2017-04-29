#include <stdio.h>


int isperfect(int n);
int next_perfect(int n);

int main(int argv, char* argc[]){
	int n, next_num;
	printf("Enter a number: ");
	scanf("%d", &n);
	next_num = next_perfect(n);
	printf("The next perfect number greater than %d is %d", n, next_num);
	return 0;
}

int isperfect(int n){
	int divisor, sum=0;
	for (divisor=2; divisor*divisor<=n; divisor++) {
				if (n%divisor == 0) {
					sum+=divisor;
				}
	}
	if (sum==n){
		return 1;
	}
	return 0; 
}

int next_perfect(int n) {
	int next_num=n;
	while(isperfect(next_num) != 1){
		next_num+=1;
	}
	return next_num;
}