
#include<stdio.h>
#include<malloc.h>
#include<conio.h>

int q_nameplate[5];
int front=-1;
int rear=-1;


int size = sizeof(q_nameplate)/sizeof(int);

void arrival();
void departure();
void parkingdisplay();

void main()
{
	clrscr();
	int choice=1;
	while(choice<4)
	{
		printf("1.Arrival\n2.Departure\n3.Parking Display\n4.Exit\nEnter Choice: ");
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
			parkingdisplay();
			break;

			case 4:
			break;
		}
	}
	getch();
}

void arrival()
{
	int carNumberPlate,i;
	printf("Enter Car Registered Number Plate:");
	scanf("%d",&carNumberPlate);
	if(front==-1)
	{
		front=rear=0;
		q_nameplate[front]=carNumberPlate;
		rear++;
		rear=((rear+1)%size);
	}
	else if((rear+1)%size!=front)
	{
		q_nameplate[rear]=carNumberPlate;
		rear=((rear+1)%size);
	}
	else
	{
		printf("No parking sapce left.\nPlease wait for a while.\n");
	}
}

void departure()
{
	int temp,i;
	printf("Enter the number of car that exited: ");
	scanf("%d",&temp);
	for(i=0;i<=size-1;i++)
	{
		if(q_nameplate[i]==temp)
		{
			q_nameplate[i]=0;//the place for parking empty
			//is represented by 0
		}
	}
}

void parkingdisplay()
{
	int i;
	for(i=0;i<=size-1;i++)
	{
		printf("Car in slot %d: %d\n",i+1,q_nameplate[i]);
	}
}