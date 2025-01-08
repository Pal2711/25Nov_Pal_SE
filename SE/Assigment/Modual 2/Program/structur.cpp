#include<stdio.h>
struct stdata{
	char nm[10];
	int roll;
	float mrark;
}st[10];
main(){
	int i,j;
	printf("Enter how many student's  you have: ");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		printf("Enter student's  name: ");
		scanf("%s",st[i].nm);
		printf("Enter student's id: ");
		scanf("%d",&st[i].roll);
		printf("Enter student's Marks: ");
		scanf("%f",&st[i].mrark);
	}
	for(i=0;i<j;i++){
		printf("\n-------------------------------------------------------------\n");
		
		printf("Enter student's  name is:%s\n ",st[i].nm);

		printf("Enter student's id is:%d\n ",st[i].roll);

		printf("Enter student's Marks:%f\n ",st[i].mrark);
	}	
}

