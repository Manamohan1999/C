#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int row, column, matrix1[3][3], matrix2[3][3], matrix3[3][3];

void getMatrix(){
	printf("in getMatrix\n");
	FILE *file1, *file2;
	char *line, *number;

	file1 = fopen("matrix.txt","r");
	file2 = fopen("matrix1.txt","r");

	row=0;
	while(!feof(file1)) {
		column = 0;
		fscanf(file1, "%s", line);
		number = strtok(line, ",");
		while(number != NULL){
			matrix1[row][column] = atoi(number);
			column++;
			number = strtok(NULL, ",");
		}
		printf("\n");
		row++;
	}

	row=0;
	while(!feof(file2)) {
		column = 0;
		fscanf(file2, "%s", line);
		number = strtok(line, ",");
		while(number != NULL){
			matrix2[row][column] = atoi(number);
			column++;
			number = strtok(NULL, ",");
		}
		printf("\n");
		row++;
	}
}
void printMatrix(){
	printf("in printmatrix\n");
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matrix3[i][j]);
		}
		printf("\n");
	}
}

void multiplyMatrix() {
	int sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				sum+=matrix1[i][k]*matrix2[k][j];
			}
			matrix3[i][j]=sum;
			sum=0;
		}
	}
}

void main() {
	printf("in main\n");
	getMatrix();
	printf("after getMatrix in main\n");
	multiplyMatrix();

	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matrix3[i][j]);
		}
		printf("\n");
	}
}