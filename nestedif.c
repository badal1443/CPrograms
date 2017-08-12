#include<stdio.h>

int main(void){
char val;
int i = 0;
printf("Enter a number:");
scanf("%d",&i);

if(i ==0){
	printf("\nYou Entered zero\n");
}else{
	if(i<=10){
		printf("You entered number less than Ten\n");
	}else{
		printf("You entered number greater than 10\n");
	}
}


}
