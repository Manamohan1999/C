#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pup();
void traverse();
main()
{
	int ch;
	while(1)
	{
		printf("***stack menu***");
		printf("\n\n\n1.push\n2.pop\n3.traverse\n4.exit\n");
		printf("enter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
			    pup();
			    break;
			case 3:
			    traverse();
			    break;
			case 4:
			    exit(0);
			default:
				printf("\n wrong choice!!!!");
					
				
		}
	}
}
void push()
{
	int val;
	if(top==MAX-1)
	{
		printf("\n is full");
	}
	else
	{
		printf("\nenter the element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
		
	}
}
void pup()
{
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{
		printf("\ndeleted item is %d",stack[top]);
		top=top-1;
	}
	return;
}
void traverse()
{
   int i;
   if(top==-1)
   {
   	printf("\nstavk is empty!!!!");
   }
   else
   {
   	printf("\nstack is.......\n");
   	for(i=top;i>=0;i--)
   	{
   		printf("%d\n",stack[i]);
   	}
   }
}
