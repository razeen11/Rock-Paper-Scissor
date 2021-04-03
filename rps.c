#include<stdio.h>
#include<conio.h>
#include<time.h>
void single();
void multi();
void main()
{
	int mode;
	clrscr();
	printf("\t:-) :-) :-)\t STONE PAPER SCISSOR\t (-: (-: (-:\n");
	printf("\t____________________________________________________\n");
	printf("\n");
	printf("\nPlease follow the Instructions:-\n \t<Enter 1 for ROCK, 2 for PAPER and 3 for SCISSOR>\n");
	printf("\tIncase of gaming with two players,masking feature for choice inputs will \tbe added soon\n");
	printf("************\t************\t************\t************\t************");
	printf("\n");
	printf("\nEnter the preferred mode (1 for playing with computer and 2 for multiplayer):");
	scanf("%d",&mode);
	printf("\n************\t************\t************\t************\t************\n");
	printf("\n");
	switch (mode)
	{
		case 1: single();
			break;
		case 2: multi();
			break;
		default: printf("\nGive 1 for single or 2 for multiplayer modes\n");
			 break;
	}
	getch();
}
	void single()
	{
	  int i,point1=0,point2=0,n,ch1,choice1;
	  int ch2;
	  char player1[20];
	  srand(time(0));
	  printf("\n Enter your name:");
	  scanf("%s",player1);
	  printf("\n Opponent is computer!\n");
	  printf("\n");
	  printf("\nEnter the number of turns you need:");
	  scanf("%d",&n);
	  printf("\n");
	  printf("\t******\t LET'S GO TO THE GAME \t******\n");
	  printf("\n");
	  for(i=0;i<n;i++)
	{
		printf("\nEnter your choice %s:",player1);
		scanf("%d",&choice1);
		ch2=(rand()%3)+1;
		printf("The choice of the computer is: %d",ch2);
		ch1=choice1;
		if((ch1>=4)||(ch2>=4))
		{
		    printf("\nOops!Enter correct choice (from 1 to 3)\n");
		    n=n+1;
		}
		else if(ch1==ch2)
		{
			printf("\nturn drawn\n");
			n=n+1;
		}
		else if((ch1==1)&&(ch2==2))
		{
			printf("\nPaper compresses the Rock! Points for computer\n");
			point2++;
		}
			else if((ch1==2)&&(ch2==1))
		{
			printf("\nPaper compresses the Rock! Points for %s\n",player1);
			point1++;
		}
			else if((ch1==2)&&(ch2==3))
		{
			printf("\nScissor cuts the Paper! Points for computer\n");
			point2++;
		}
			else if((ch1==3)&&(ch2==2))
		{
			printf("\nScissor cuts the Paper! Points for %s\n",player1);
			point1++;
		}
			else if((ch1==1)&&(ch2==3))
		{
			printf("\nRock breaks the Scissor! Points for %s\n",player1);
			point1++;
		}
			else if((ch1==3)&&(ch2==1))
		{
			printf("\nRock breaks the Scissor! Points for computer\n");
			point2++;
		}
	}
	printf("\n");
	printf("\n\t *********TIME FOR RESULTS*********\n");
	printf("\n");
	printf("\nThe score of %s is: %d\n",player1,point1);
	printf("\nThe score of the computer is: %d\n",point2);
	printf("\n");
	printf("\n*****\t*****\t*****\t*****\t*****\t*****\n");
	if(point1>point2)
	{
		printf("\n\t :-) The winner is %s (-:\n",player1);
	}
	else if(point1<point2)
	{
		printf("\n\t :-) The winner is the computer (-:\n");
	}
	else
	{
		printf("\n\t Game drawn\n");
	}
	printf("\n*****\t*****\t*****\t*****\t*****\t*****\n");
	printf("\n\t:-) :-) :-)\t ALL IS WELL\t (-: (-: (-:\n");
	printf("\t_____________________________________________");
	}
void multi()
{
	int i,point1=0,point2=0,n,ch1,ch2,choice1,choice2;
	char player1[20], player2[20];
	printf("\n Enter the name of the player-1:");
	scanf("%s",player1);
	printf("\n Enter the name of the player-2:");
	scanf("%s",player2);
	printf("\n");
	printf("\nEnter the number of turns you need\n");
	scanf("%d",&n);
	printf("\n");
	printf("\n******\t LET'S GO TO THE GAME \t******\n");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter your choice %s:",player1);
		scanf("%d",&choice1);
		ch1=choice1;
		printf("\nEnter your choice %s:",player2);
		scanf("%d",&choice2);
		ch2=choice2;
		if((ch1>=4)||(ch2>=4))
		{
		    printf("\nOops!Enter correct choice (from 1 to 3)\n");
		    n=n+1;
		}
		else if(ch1==ch2)
		{
			printf("\nturn drawn\n");
			n=n+1;
		}
		else if((ch1==1)&&(ch2==2))
		{
			printf("\nPaper compresses the Rock! Points for %s\n",player2);
			point2++;
		}
			else if((ch1==2)&&(ch2==1))
		{
			printf("\nPaper compresses the Rock! Points for %s\n",player1);
			point1++;
		}
			else if((ch1==2)&&(ch2==3))
		{
			printf("\nScissor cuts the Paper! Points for %s\n",player2);
			point2++;
		}
			else if((ch1==3)&&(ch2==2))
		{
			printf("\nScissor cuts the Paper! Points for %s\n",player1);
			point1++;
		}
			else if((ch1==1)&&(ch2==3))
		{
			printf("\nRock breaks the Scissor! Points for %s\n",player1);
			point1++;
		}
			else if((ch1==3)&&(ch2==1))
		{
			printf("\nRock breaks the Scissor! Points for %s\n",player2);
			point2++;
		}
	}
	printf("\n");
	printf("\n\t *********TIME FOR RESULTS*********\n");
	printf("\n");
	printf("\nThe score of %s is: %d\n",player1,point1);
	printf("\nThe score of %s is: %d\n",player2,point2);
	printf("\n");
	printf("\n*****\t*****\t*****\t*****\t*****\t*****\n");
	if(point1>point2)
	{
		printf("\n\t :-) The winner is %s :-)\n",player1);
	}
	else if(point1<point2)
	{
		printf("\n\t :-) The winner is %s :-)\n",player2);
	}
	else
	{
		printf("\n\t Game drawn\n");
	}
	printf("\n*****\t*****\t*****\t*****\t*****\t*****\n");
	printf("\n\t:-) :-) :-)\t ALL IS WELL\t (-: (-: (-:\n");
	printf("\t_____________________________________________");
}