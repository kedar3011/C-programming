#include<stdio.h>
#include<malloc.h>
#include<conio.h>

int park[5]={0,0,0,0,0};
int front=-1;
int rear=-1;
int vehicle=0;
int amt=0;
int prkspce=0;
int val=0;
int stack[5]={0,0,0,0,0},stack1[5]={0,0,0,0,0};
int top=-1,top1=-1;

void arrival();
void departure();
void parkingdisplay();
void enqueue(int n);
void dequeue(int n);
void push(int n);
void pop();
void push1(int n);
void pop1();

void main()
{
	int choice=0;
	clrscr();
	while(choice!=4)
	{
		printf("\n 1.Arrival\n2.Departure\n3.Parking Display\n4.Exit\nEnter Choice: ");
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
	if(prkspce==0)
	{
		front=rear=0;
		enqueue(carNumberPlate);
		prkspce++;


	}
	else if(prkspce<5)
	{
		enqueue(carNumberPlate);
		prkspce++;

	}
	else if(prkspce==5)
	{
		printf("No parking sapce left.\nPlease wait for a while.\n");
	}
}

void departure()
{
	int temp,i=0,j=0,k=0,n=0,counter=0;
	printf("Enter the number plate of the car which you want to exit: ");
	scanf("%d",&temp);
	while(counter!=1)
	{
	if(park[i]==temp)
	{
		park[i]=0;
		counter=1;
	}
	else if(n<5)
	{
		n++;
		i++;
	}
	else
	{
	counter=1;
	}
	}
	if(n==5)
	{
		printf("\n The car of the given number plate was not found");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			dequeue(i);
			push(val);
		}
		for(j=0;j<n;j++)
		{
			pop();
			push1(val);
		}
		for(k=0;k<n;k++)
		{
			pop1();
			enqueue(val);
		}
		prkspce--;

	}
}

void parkingdisplay()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Car in slot %d: %d\n",i+1,park[i]);
	}
}
void enqueue(int n)
{
	int i=0,counter=0;
	if(prkspce==0)
	{
		park[0]=n;
	}
	else if(prkspce<=5)
	{
		while(counter!=1)
		{
			if(park[i]==0)
			{
			park[i]=n;
			counter=1;
			}
			else if(park[i]!=0)
			{
			i++;
			}
		}
	}
}
void dequeue(int n)
{
	if(prkspce!=0 && prkspce<5)
	{
		val=park[n];
		park[n]=0;
	}
}

void push(int n)
{
	if(top!=4)
	{
		top++;
		stack[top]=n;
	}
}

void pop()
{
	val=stack[top];
	top--;
}

void push1(int n)
{
	 if(top1!=4)
	{
		top1++;
		stack1[top1]=n;
	}
}

void pop1()
{
	val=stack1[top1];
	top1--;
}