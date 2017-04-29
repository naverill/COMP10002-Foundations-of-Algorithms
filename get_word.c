#include <stdio.h>
#include <string.h>

#define MACCHARS 10  /* Max chars per word*/
#define MAXWORDS 1000 /* Max distinct words*/

typedef char word_t[MAXCHARS+1];
int getword(word_t w, int limit);

int main( int argc, char *argv[]){
	word_t one_word, all_words[MAXWORDS];
	int numdistinct=0, totwords=0, i, found;
	while (getword(one_word, MAXCHARS) != EOF){
		totwords = totwords+1;
		/* linear search in array of previous words */
		found =0;
		for (i=0; i<numdistinct && !found; i++){
			found = (strcomp(one_word, all_words[i]) == 0);
		}
	}
	if (!found && numdistinct<MAXWORDS){
		strcpy(all_words[numdistinct], one_word);
		numdistinct += 1;
	}
	/* NB - program silently discards words after MAXWORDS distinct ones have been found*/
}

int getword(char W[], int limit){
	int c, len =0;
	/*first skip over non alphabetics*/
	while((c=getchar()!=EOF) && !isalpha(c)){
		/*do nothing*/
	}
	if (c==EOF){
		return EOF;
	}
	W[len++] = c;
	while(len<limit && (c=getchar())!=EOF && c != '\n') {
		/* another character to be stored */
		W[len++] = c;
	}
	W[len] = '\0';
	return 0;
}