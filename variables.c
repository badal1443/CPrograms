#include<stdio.h>

int main(void){
int num1=10,num2=2;
float sum,sub,mul,div;
sum = num1 + num2;
printf("\nThe sum is %f",sum);

sub = num1-num2;
printf("\n\nSubtracting %d from %d results in %f",num1,num2,sub);

mul = num1*num2;
printf("\n\nThe multiplication of %d and %d is %f",num1,num2,mul);

div = num1/num2;
printf("\n\nThe division of %d by %d is %f",num1,num2,div,"\n");
printf("\n\nEnd of program\n\n");


}
