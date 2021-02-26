char array[20];
char l,t;
int j=1;
void A();
void S();
void match(char t);
#include<stdio.h>
main()
{

	printf("Enter the string:\n");
	scanf("%s",&array);
	l=array[0];
	S();
	if(l=='$')
	{
		printf("String is accepted.\n");
	}
	else
	{
		printf("String is not valid.\n");
	}
}
void S()
{
	if(l=='a')
	{
		match('a');
		S();
		match('b');
		A();
	}
	if(l=='b')
	{
		match('b');
	}
	
}
void A()
{
	if(l=='a')
	{
		match('a');
	}
}
void match(char t)
{
	l=array[j];
	j=j+1;
}
