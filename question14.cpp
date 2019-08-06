// CS101-102 Exam 1: Question 14
#include <stdio.h> 
#include <math.h>

int main(void) {
	// TODO: add your code here
	int bmon, bday, mon, day;
	printf("Enter the month of your birthday (1-12): ");
	scanf("%i", &bmon);
	printf("Enter the day of your birthday (1-31): ");
	scanf("%i", &bday);
	printf("Enter today's month: ");
	scanf("%i", &mon);
	printf("Enter today's day: ");
	scanf("%i", &day);
	printf("\n");
	if(bmon>mon){
		printf("Your birthday is in the future.");
	}
	else if(bmon<mon){
		printf("Your birthday was in the past.");
	}
	else{
		if(bday>day){
			printf("Your birthday is in the future.");
		}
		else if(bday<day){
			printf("Your birthday was in the past.");
		}
		else{
			printf("Happy birthday, today is your brithday!");
		}
	}
	
	return 0;
}
