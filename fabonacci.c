#include<stdio.h>

int main(){
	int i=0;
	int num1,num2;
	num1=i;
	int newNum1;
	printf("The fabonacci series from 1 to 10 is:\n");
	while(i<10){
		if(i==0){
			num1 = 0;
			num2 = num1 + 1;
			printf("%d,%d",num1,num2);
		}else{
			newNum1 = num2;
			num2 = num2+num1;
			num1 = newNum1;
			printf(",%d",num2);
		}
		i++;
		
	}
	printf("\n");

}
