#include<stdio.h>
#include<math.h>
int main()
{
	int num,count=0,num2=0;
	printf("\nEnter an Integer:");
	scanf("%d",&num);
	printf("\nYou have Entered:%d",num);
	int i,sum=0,rim;
	while(num!=0)
	{   
		rim=num%10;
		num2=(num2*10)+rim;
		num=num/10;
		sum=sum+rim;
		++count;
	}
	printf("\nNo. in Reverse:%d",num2);
	printf("\nNo. of Digits:%d",count);
	printf("\nSum of Digits is:%d",sum);
}
