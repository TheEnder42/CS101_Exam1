// CS101-102 Exam 1: Question 13
#include <stdio.h>
#include <math.h>

int main(void) {
	// TODO: add your code here
	int quarters;
	printf("How many quarters? ");
	scanf("%i", &quarters);
	printf("Dollars: %i\n", quarters/4);
	printf("Cents: %i", (quarters%4)*25);
	return 0;
}
