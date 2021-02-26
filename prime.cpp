#include<stdio.h>
main()
{
	int n,count,prime=0,x=1;
	printf("enter the number to chech weather it is prime or composite");
	scanf("%d",&n);
	while(x<=n)
	{
		count=n%x;
		if(count==0)
		{
			prime=prime+1;
		}
		x++;
		
	}
	if(prime==2)
	{
		printf("Yes it is prime");
	}
	else
	{
		printf("It is composite");
	}
}
