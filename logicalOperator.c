#include<stdio.h>
/*Seniority based on age and experience.*/
int main(void){
int age;
int exp;

printf("\nEnter your age: ");
scanf("%d",&age);
printf("\nEnter your years of experience:");
scanf("%d",&exp);

if(age >=30 && exp >=5)
	printf("You are eligible for senior programmer post.\n");
else if(age>=25 && exp>=10)
	printf("You can appear for senior programmer interview.\n");
else if(age<25 || exp<5)
	printf("Not eligibale for senior programmer post.\n");
else
	printf("Check with your manager.\n");

}
