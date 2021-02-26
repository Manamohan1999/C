#include<stdio.h>
void main(){
	switch(2){
		case 2:
			printf("no\n");
			continue;
		case 1:
			printf("output\n");
		default:
			printf("continue\n");
	}
}