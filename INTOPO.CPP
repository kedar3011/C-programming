#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int top=-1;
int AssignPriority(char x)
{
	if(x=='^')
	return 3;
	else if(x=='*'|| x=='/')
	return 2;
	else if(x=='+'||x=='-')
	return 1;
	else
	return 0;
}

void ConvInfToPost(char exp[])
{
	int i=0,j=0,top=-1;
	char stack[15],PE[20];
	while(exp[i]!=0)
	{
		if(isalnum(exp[i]))
		PE[j++]=exp[i];
		else if(top>-1 && (AssignPriority(stack[top])<AssignPriority(exp[i])))
		stack[++top]=exp[i];
		else
		{
		while(AssignPriority(stack[top])>=AssignPriority(exp[i]))
		{
		PE[j++]=stack[top--];
		}
		stack[++top]=exp[i];
		}
		i++;
	}
	while(top>-1)
	PE[j++]=stack[top--];
	PE[j]='\0';
	puts(PE);
}
void Eval(char x[])
{
	int a,b,d;
	char c;
	int stack[20];
	int i=0,top1=-1;
	while(x[i]!='\0')
	{
	if(isdigit(x[i]))
	{
	stack[++top1]=int(x[i]-'0');
	top=top1;
	}
	else
	{
	a=stack[top1--];
	b=stack[top1];
	c=x[i];
	switch(c)
	{
		case '+':d=b+a;
		break;
		case '-':d=b-a;
		break;
		case '/':d=b/a;
		break;
		case '*':d=b*a;
		break;
	}
	top--;
	stack[top]=d;
	}
	i++;
	}
	printf("ans is %d",stack[0]);
}

void main()
{
	char exp[20];
	char x[20];
	printf("infix");
	gets(exp);
	ConvInfToPost(exp);
	printf("postfix");
	gets(x);
	Eval(x);
	getch();
}
