#include<stdio.h>
main()
{
	int x,rim,a[20];
	printf("Enter number in decimal:\n");
	scanf("%d",&x);
	int i=0;
	for(i=0;x>=1;i++)
	{
		a[i]=x%2;
		x=x/2;
	}
	printf("The Binary represantation of the number is:\n");
	for(rim=(i-1);rim>=0;rim--)
	{
		printf("%d ",a[rim]);
	}
}
