#include <stdio.h>

#define NEWLINE '\n'

int main(int argc, char *argv[]) 
{
	int c, lineCount=0, charCount=0, wordCount=0;
	
	printf("Enter text:\n");
	while((c=getchar()) != EOF) 
	{	
		if (c == '\n') 
		{	
			lineCount += 1;
		}
		if (c== ' ') 
		{
			wordCount+=1;	
		}
		charCount+=1;
		}
	printf("Lines:\t%d\n", lineCount);
	printf("Chars:\t%d\n", charCount);
	printf("Words:\t%d\n", wordCount);
	return 0;
}