#include<stdio.h>
main()
{
	int x;
	printf("\n!! Students Detail Menu !!\n");
	printf("\n1.enter detail\n2.search \n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			void student();
			break;
		default:
			printf("\nyou entered a invalid choice.Please enter a valid choice.\n");
	}
}
void student()
{
	struct studen
	{
		int roll;
		char name[20];
		char branch[10];
		int phone[10];
	};
	struct studen l[1];
	int i;
	for(i=0;i<1;i++)
	{
		printf("\nEntering student detail--\n");
		printf("\nroll:\n");
		scanf("%d",&l[i].roll);
		printf("\nname:\n");
		scanf("%s",&l[i].name);
		printf("\nbranch:\n");
		scanf("%s",&l[i].branch);
		printf("phone:\n");
		scanf("%d",&l[i].phone);
	}
}

