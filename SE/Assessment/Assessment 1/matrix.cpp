#include<stdio.h>
main(){
	int j,k,i;
	int matrix1[2][2],matrix2[2][2],multi1[2][2];
	
	printf("Enter value of matrix 1:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("matrix1[%d][%d]: ",i,j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("Enter value of matrix2:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("matrix2[%d][%d]: ",i,j);
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				multi1[i][j] += matrix1[i][j] * matrix2[i][j];	
			}		
		}
	}
	
	printf("----------matrix: 1----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",matrix1[i][j]);
		}
		printf("\n");
	}
	printf("----------matrix: 2----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",matrix2[i][j]);
		}
		printf("\n");
	}
	printf("----------Result of multiplication:----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",multi1[i][j]);
		}
		printf("\n");
	}
				
	
}	
