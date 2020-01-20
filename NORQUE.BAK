#include<conio.h>
#include<stdio.h>

int q[5];
int front=-1,rear=-1;
int val;

void enqueue()
{
	//int val;
	scanf("%d",&val);
	if(front==-1)
	{
		front=0;
		rear=0;
		q[rear]=val;
	}
	else if(rear<4)
	{
		rear++;
		q[rear]=val;
	}
	else
	{
		printf("Queue full");
	}
}

void dequeue()
{
	if(front==-1)
	{
	printf("Queue is empty");
	}
	else if(front<rear)
	{val=q[front];
	front++;
	printf("%d",val);
	}
	else if(front==rear)
	{val=q[front];
	front=-1;
	rear=-1;
	printf("%d",val);
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{printf("\n %d",q[i]);
	}
}
void main()
{
	int choice=0;
	clrscr();
	while(choice!=4)
       {printf("Normal Queue \n1.Queue \n2.Dequeue \n3Display \n4.Exit");
       scanf("%d",&choice);
       switch(choice)
       {
		case 1:printf("Enter value");
		       enqueue();
		       break;
		case 2:dequeue();
			break;
		case 3:display();
			break;
       }
       }
       getch();
}
