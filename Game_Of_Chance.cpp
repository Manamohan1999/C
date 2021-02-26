#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SEED 12345
void play(void);
int thro(void);

main()
{
	char answer='Y';
	printf("Wel Come To The Game Of CRAPS\n\n");
	printf("To Throw The Dice Press ENTER\n\n");
	
	srand(SEED);
	while(toupper(answer) !='N')
	{
		play();
		printf("\nDo You Want To Play Again ? (Y/N)");
		scanf("%c",&answer);
		printf("\n");
	}
	printf("Good Bye ,Have A Nice Day");
}

 void play(void)
{
	int score1,score2;
	char dummy;
	printf("\n\nPlease Throw The Dice......");
	scanf("%c",&dummy);
	printf("\n");
	score1=thro();
	printf("\n%2d",score1);
	switch(score1)
	{
		case 7:
		case 11:
			printf("-Congratulations ! You Win On The First Throw\n");
			break;
		case 2:
		case 3:
		case 12:
			printf("-Sorry You LOSE On The First Throw\n");
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			do{
				printf("-Throw The Dice Again....");
				scanf("%c",&dummy);
				score2=thro();
				printf("\n%2d",score2);
			} while(score2 !=score1&&score2 !=7);
			
			if(score2==score1)
			  printf("--You Win By Matching Your First Score--\n");
			else
			  printf("--You Lose By Faling To Match Your First Score\n\n");
		break;	  
	}
	return;
}


int thro(void)
{
	float x1,x2;
	int n1,n2;
	x1=rand()/32768.0;
	x2=rand()/32768.0;
	
	n1=1+(int)(6*x1);
	n2=1+(int)(6*x2);
	
	return(n1+n2);
}
