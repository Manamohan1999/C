#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
	float a,b,c,decision,root,sol1,sol2;
	printf("!!!!!!!This Is A Solution To The Quandratic Equations!!!!!!!!\n");
	printf("Enter The Co-Efficient of X^2:");
	scanf("%f",&a);
	printf("\nEnter The Co-Efficient of X:");
	scanf("%f",&b);
	printf("\nEnter The Constant:");
	scanf("%f",&c);
	decision=b*b-4*a*c;
	root=sqrt(decision);
    if(decision>=0){
    	if(decision==0){
    		printf("The Equation Has Unique Solution:\n");
    		sol1=-b/(2*a);
    		printf("Solution:%.3f",sol1);
		}
		else{
			printf("The Equation Has Two Solutions:\n");
			sol1=(-b+root)/(2*a);
			sol2=(-b-root)/(2*a);
			printf("Solutions:%.3f and %.3f",sol1,sol2);
		}
	}
	else{
		printf("The Equation Has Two Complex Solutions:\n");
		root=sqrt(fabs(decision));
		sol1=(-b)/(2*a);
	    sol2=(-b)/(2*a);
		printf("Solutions:%.3f+%.3fi and %.3f-%.3fi",sol1,root,sol2,root);
	}
}
