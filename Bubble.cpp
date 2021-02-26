#include<stdio.h>
main()
{
	int i,j,n,c;
	printf("Enter the size of the array:\n");
	int a[n];
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				c=a[j];
				a[j]=a[j-1];
				a[j-1]=c;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
