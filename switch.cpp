#include<stdio.h>
#include<math.h>
main()
{
	int n,a,b,c;
	printf("plese enter ur choice\n");
	printf("\n1 :sum\n2:substraction\n3:multiplication\n4:division\n");
	scanf("%d",&n);
	if(n<5)
	{
		printf("enter the values for operation\n");
	    scanf("%d%d",&a,&b);
	}
	switch(n)
	{
		case 1:
			c=a+b;
			printf("the result is:%d",c);
			break;
		case 2:
			c=a-b;
			printf("the result is:%d",c);
			break;
		case 3:
			c=a*b;
			printf("the result is:%d",c);
			break;
		case 4:
			c=a/b;
			printf("the result is:%d",c);
			break;
		default:
			printf("sorry u entered a wrong choice \n better luck next time");
}
}
