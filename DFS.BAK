#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int n;
int adj[50][50];
int visited[50];

void dfs(int i)
{
	int j=0;
	visited[i]=1;
	printf("%d",i);
	for(j=0;j<n;j++)
	{
		if(adj[i][j]==1 && visited[j]!=1)
		dfs(j);
	}
}

int main()
{
	int i=0,j=0;
	clrscr();
	printf("Enter the number of vertices \n");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",adj[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++)
	visited[i]=0;

	dfs(0);
	getch();

}