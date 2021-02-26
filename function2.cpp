#include<stdio.h>
main()
{
	char c1;
	printf("enter a character in lower case");
	scanf("%c",&c1);
	if(c1<='z'&&c1>='a')
	{
		c1='A'+c1-'a';
		printf("ihe entered char in upper case is:\n%c",c1);
	}
	else
	{
		printf("please enter a valid choice");
	}
}
