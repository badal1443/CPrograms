#include<stdio.h>

int main(){
	int i=1;
	printf("Enter a number less than 5.  ");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("You entered 1\n");
			break;
		case 2:
			printf("You entered 2\n");
			break;
		case 3:
			printf("You entered 3\n");
			break;
		default:
			printf("Don't know what you entered\n");
	}
}
