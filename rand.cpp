#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int main(void)
{
	srand(time(0));
	char n;
	do
	{
		for(int i=0;i<=5;i++)
		{
			printf("%d\n",rand());
		}
		printf("Enter Y/N to do it again:");
		scanf("%c",&n);
	}while(toupper(n)!='N');
}
