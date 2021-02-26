#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int a[]={1,2,3}, b[]={4,5,6};
void vectorSum();
void dotProduct();
int main() {
	vectorSum();
	dotProduct();

	return 0;
}

void vectorSum(){
	int c[3];
	for(int i=0;i<3;i++){
		c[i]=a[i]+b[i];
	}
	printf("Vector sum is:: [ ");
	for(int i=0;i<3;i++){
		printf("%d ",c[i]);
	}
	printf("]\n");
}

void dotProduct(){
	int sum=0;
	for(int i=0;i<3;i++){
		sum += a[i]*b[i];
	}

	printf("Dot Product is:: %d\n",sum);
}