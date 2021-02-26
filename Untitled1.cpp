#include<stdio.h>
main()
{
	int a[5],b[5];
	int i;
	printf("enter the value in a");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value in b");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d%d\n",a[i],b[i]);
	}
}
