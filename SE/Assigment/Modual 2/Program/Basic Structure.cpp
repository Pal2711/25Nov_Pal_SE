#include<stdio.h>
main(){
	char name[10];
	int dob;
	float age;
	
	printf("Enter your name: ");
	scanf("%s",&name);
	
	printf("Enter your DOB: ");
	scanf("%d",&dob);
	
	printf("Enter your age: ");
	scanf("%f",&age);
	
	printf("Your name is %s\n",name);
	printf("Your DOB is %d\n",dob);
	printf("Your name is %f\n",age);

}

