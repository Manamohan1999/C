#include<stdio.h>
char lower_to_upper(char c1)
{
	char c2;
	c2=(c1>='a'&&c1<='z')?('A'+c1-'a'):c1;
	return(c2);
}
main()
{
	char lower,upper;
	printf("please enter a lower case letter");
	scanf("%c",&lower);
	upper=lower_to_upper(lower);
	printf("\nthe uppercase equivalent is %c\n\n",upper);
}
