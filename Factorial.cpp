#include<stdio.h>
main()
{
	int n=0;
	int factor=1;
	printf("Enter N:");
	scanf("%d",&n);

	if(n<0){
		printf("Enter Positive number..");
	}else{
		for(int i=1;i<=n;i++){
			factor*=i;
		}
	}
	printf("Factorial:%d\n", factor);
}