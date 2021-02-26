#include<stdio.h>
void main(){
	int x=1,y=3,z=0;
	//the expression with more than one operators acting like a xor of the two expressions(x!=y and y>=z)
	if (x!=y>=z){
		printf("right");
	}else{
		printf("\nwrong");
	}
}