#include<stdio.h>

/*This program illustrates how the value of an artithemtic operation is 
promoted (converted to float) or demoted (converted to int) while assigning
to one type of variable
*/
int main(void){
int a=0;
float b=0.0;

a = 7/2;
printf("\nThe value of a(7/2) = %d",a);

a = 7.0/2;
printf("\nThe value of a(7.0/2) = %d",a);

a = 7.0/2.0;
printf("\nThe value of a (7.0/2.0) = %d",a);

a = 2/7;
printf("\nThe value of a (2/7) = %d",a);

a = 2.0/7;
printf("\nThe value of a(2.0/7) = %d",a);

b = 5/2;
printf("\n\nThe value of b(5/2) = %f",b);

b = 5.0/2;
printf("\nThe value of b(5.0/2) = %f",b);

b = 5.0/2.0;
printf("\nThe value of b (5.0/2.0) = %f",b);


printf("\n\n*******Ednd*******\n");
}

