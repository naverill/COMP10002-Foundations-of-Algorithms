#include <stdio.h>

int main(int argc, char *argv[]) {
	int sum = 0;
	#define NUM1 5
	#define NUM2 3
	for(int i=1; i<1000; i++) {
		if(i%NUM1==0 || i%NUM2==0) {
			sum+=i;
			}
		}
	printf("%d", sum);
	return 0;
}