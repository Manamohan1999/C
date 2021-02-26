#include<stdio.h>
main()
{
	float sum1=1,sum2=1,diff=0,i=1;

	do{
		sum2=sum1+(1/++i);
		diff=sum2-sum1;
		sum1=sum2;
		printf("%f\n",diff);
	}while(diff>0.001);
}