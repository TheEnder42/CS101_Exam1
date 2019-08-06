// CS101-102 Exam 1: Question 12
#include <stdio.h>
#include <math.h>

int main(void) {
	// TODO: add your code here
	double moon, earth;
	printf("Input initial height on Earth: ");
	scanf("%lf", &earth);
	printf("Input initial height on the moon: ");
	scanf("%lf", &moon);
	printf("Object dropped from a height of %.02lf meters on Earth\n", earth);
	printf("Velocity at impact was %.02lf m/s on Earth\n", 9.81*sqrt(2*earth/9.81));
	earth = 9.81*sqrt(2*earth/9.81);
	printf("Object dropped from a height of %.02lf meters on the moon\n", moon);
	printf("Velocity at impact was %.02lf m/s on the moon\n", 1.62*sqrt(2*moon/1.62));
	moon = 1.62*sqrt(2*moon/1.62);
	if(moon>earth){
		printf("The velocity on the moon was greater than on Earth");
	}
	else{
		printf("The velocity on Earth was greater than on the moon");
	}
	return 0;
}
