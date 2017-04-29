#include <stdio.h>

int main(int argc, char *argv[]) {
    double temp;
    double outTemp;
    
    printf("Enter a Temperature: ");
    
    if ((scanf("%lf", &temp))!=1) {
        printf("ERROR: Please enter a number.");
    }
    else {
      outTemp = ((temp-32.0)*(5.0/9.0));
      printf("The temperature in celcius is %f\n",  outTemp);
    }
    return 0;
}