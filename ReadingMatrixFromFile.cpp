#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int row, column, matrix1[3][3], matrix2[3][3], matrix3[3][3];

printf("Reading files....\n");
	//get matrices from the file
	FILE *file1, *file2;
	char *line1, *line2, *number;

	file1 = fopen("matrix.txt","r");

	row=0;
	while(!feof(file1)) {
		column = 0;
		fscanf(file1, "%s", line1);
		number = strtok(line1, ",");
		while(number != NULL){
			matrix1[row][column] = atoi(number);
			column++;
			number = strtok(NULL, ",");
		}
		printf("\n");
		row++;
	}
	fclose(file1);
	printf("29");
	file2 = fopen("matrix2.txt","r");
	printf("Reading files....\n");
	row=0;
	while(!feof(file2)) {
		column = 0;
		fscanf(file2, "%s", line2);
		number = strtok(line2, ",");
		while(number != NULL){
			matrix2[row][column] = atoi(number);
			column++;
			number = strtok(NULL, ",");
		}
		printf("\n");
		row++;
	}
	fclose(file2);

	printf("File Reading Completed....\n");

	//multiply the matrices
	int sum=0;
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(int k=0;k<3;k++){
				sum+=(matrix1[i][k]*matrix2[k][j]);
			}
			matrix3[i][j]=sum;
			sum=0;
		}
	}
	printf("Matrix multiplication Completed....\n");

	printf("Printing the result...\n");
	//printing the result marix
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matrix3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
