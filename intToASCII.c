#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("\t\t+0\t +1\t +2\t +3\t +4\t +5\t +6 \t +7\n");
	printf("\t+----------------------------------------------------------------\n");
	for (int i=32; i<127; i+=8) {
		printf("%d\t|\t", i);
		for (int j=0; j<8; j++) {
			int a = i+j;
			char c = a;
			printf("%c\t", c);
		}
		printf("\n");
	}
	return 0;
}