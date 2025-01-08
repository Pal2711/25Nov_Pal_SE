#include<stdio.h>
main(){
	int num1;
	
	printf("Enter number 1: ");
	scanf("%d",&num1);

	if(num1%2==0)
	{
		printf("This number is even");	
	}	
	else
	{
		printf("This number is odd");
	}
}

