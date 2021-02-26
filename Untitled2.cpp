#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 20
int top=-1,stack[MAX];
void push();
void traverse();
main()
{
	int ch;
	while(1)
	{
		printf("***Student Detail***");
		printf("\n1.Enter student Detail\n2.search detail\n3.Exit\n");
		printf("Please enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				traverse();
				break;
			case 3:
				exit(0);
			default:
				printf("\nYou entered a wrong choice???\n");
		}
	}
}
void push()
{
	struct student
{
	int roll;
	char name[20];
	char branch[10];
	int ph[10];
};
 struct student stack[MAX];
 int i;
 if(top==MAX-1)
 {
 	printf("\nStudent List is Full??\n");
 }
 else
 {
 	for(i=0;i<MAX;i++)
 	{
 		printf("\nRoll:");
 		scanf("%d",&stack[i].roll);
 		printf("\nName:");
 		scanf("%s",&stack[i].name);
 		printf("\nBranch:");
 		scanf("%s",&stack[i].branch);
 		printf("\nPhone:");
 		scanf("%d",stack[i].ph);
 		top=top+1;
 		struct student stack[top]=stack[i];
 	}
 }
}
void traverse()
{
	int i;
	if(top==-1)
	{
		printf("\n***Student List is Empty***\n");
	}
	else
	{
		printf("\n***Student Detail***\n");
		for(i=0;i>=0;i--)
		{
			printf("\nRoll:%d\nName:%s\nBranch:\nPhone:%d",stack[i].roll,stack[i].name,stack[i].branch,stack[i].ph);
		}
	}
}
