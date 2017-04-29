#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int day;
	int month;
	int year;
	
	printf("Enter the date: ");
	scanf("%d/%d/%d", &day, &month, &year);
	if (day<=0 || day>31 || month<=0 || month>12) {
		printf("ERROR: Invalid input.");
		exit(EXIT_FAILURE);
	}
	if (month==9 || month==4 || month==6 || month ==11) {
		if (day==30) {
			day =1;
			month+=1;
		}
		else {
			day+=1;              
		}
	}
	else if (month==01 || month==3 || month ==5 || month==7|| 
		month==8|| month==9|| month==10) {
		if (day==31) {
			day =1;
			month+=1;
		}
		else {
			day+=1;
		}
	}
	else if (month==12) {
		if (day==31) {
			day = 1;
			month =1;
			year+=1;
		}
		else {
			day +=1;
		}
	}
	else if(month==2) {
		if (year%4==0 && (year%100!=0 || year%400==0)) {
			if (day==29) {
				day=1;
				month+=1;
			}
			else {
				day+=1;
			}
		}
		else {
			if (day==28) {
				day = 1;
				month+=1;
			}
			else {
				day+=1;
			}
		}
	}
	printf("The date tomorrow is %d/%d/%d\n", day, month, year);
	return 0;
}