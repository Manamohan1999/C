#include<stdio.h>
main()
{
	struct student
	{
		int roll;
		char name[20];
		char branch[15];
		int phone[10];
		
	};
	struct student l[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("\nplease enter the roll no. of the student\n");
		scanf("%d",&l[i].roll);
		printf("\nenter the name\n");
		scanf("%s",&l[i].name);
		printf("\nenter the branch\n");
		scanf("%s",&l[i].branch);
		printf("\nenter your phone no.\n");
		scanf("%d",&l[i].phone);
	}
}
