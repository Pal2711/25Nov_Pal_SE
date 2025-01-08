#include<stdio.h>
main(){
	int choice;
	
	printf("Enter your choice number between 1 to 12: ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
		printf("month is jan");
		break;
		
		case 2:
		printf("month is feb");
		break;
		
		case 3:
		printf("month is mar");
		break;
		
		case 4:
		printf("month is apr");
		break;
		
		case 5:
		printf("month is may");
		break;
		
		case 6:
		printf("month is jun");
		break;
		
		case 7:
		printf("month is jul");
		break;
		
		case 8:
		printf("month is aug");
		break;
		
		case 9:
		printf("month is sept");
		break;
		
		case 10:
		printf("month is oct");
		break;
		
		case 11:
		printf("month is nov");
		break;
		
		case 12:
		printf("month is dec");
		break;
		
		default:
		printf("Not a valid number.....");
		break;
	}
}

