/* This program illustrates how user can provide the input to a program 
for an operation. In this case we wish to calculate simple interest. */

#include<stdio.h>

int main(void){
	float pamt, rate, time;
	printf("\nPlease enter principal amount: ");
	scanf("%f",&pamt);
	printf("\nPlease enter rate of interest: ");
	scanf("%f",&rate);
	printf("Please enter time: ");
	scanf("%f",&time);

	printf("\nCalculation in progress......");
	float si = pamt * rate * time;
	printf("\n\n The simple interest calculated = %f",si);
	printf("\n\n");
	return 0;
}
