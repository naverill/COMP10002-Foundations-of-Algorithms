#include <stdio.h>

int main(int argc, char **argv)
{
	int number;
	printf("Enter  number: ");
	scanf("%d", &number);
	if ((-256<number && number<=0) || (0<=number && number<256)) 
 {
 	 printf("%d", number);
 	 return number;
 }
 	else if (number>=256) {
 		while(number>=256) 
 		{
 			number-= 256;
 		}
 	printf("%d", number);
 	return number;
  }
  	else if (number==256) 
  	{
  		printf("%d", number);
  		return 0;
  	}
  	else {
  		while(number<=256)
  		{
  			number+=256;
  		}
  		printf("%d", number);
  		return number;
  }
}