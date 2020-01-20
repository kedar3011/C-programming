#include<stdio.h>
#include<conioo.h>
#include<malloc.h>

struct node{
	int name_plate;
	struct node * next;
}*newnode;

void arrival();
void departure();

void main()
{
	clrscr();
	while(choice<=3)
	{
		int choice=1;
		printf("1.Arrival\n2.Departure\n3.Exit\nEnter Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			arrival();
			break;

			case 2:
			departure();
			break;

			case 3:
			break;
		}
	}
	getch();
}

void arrival()
{
	printf("Enter the nameplate: ");
}