#include<stdio.h>
#define MAX 20       //array ka size locate karta ha
int adj[MAX][MAX];
int n,v;
int visited[MAX];

void create (void)
{
int i,maxedge,origin,destin;
puts("enter number of vertex");
scanf("%d",&n);
maxedge=n*(n-1);
for(i=1;i<=maxedge;i++)
{
printf("enter edge origin and destination or 00 to quit");
scanf("%d%d",&origin,&destin);
if(origin==0 && destin==0)
break;
if(origin==0 || destin==0 || origin>n || destin>n)
{
printf("invalid entry");
}
else
adj[origin][destin]=1;
}
}

void dfs(int v)
{
int i;
printf("%d\t",v);
visited [v]=1;
for(i=1;i<=n;i++)
{
if(adj [v][i]==1  &&  visited[i]==0)
dfs(i);
}
}
void bfs(int v)
{
int i,front,rear;
int que[MAX];
front=rear=-1;
printf("%d",v);
visited[v]=1;
front++;
rear++;
que[rear]=v;
while(front<=rear)
{
v=que[front];
front++;
for(i=1;i<=n;i++)
{
if(adj[v][i]==1 && visited[i]==0)
{
printf("%d",i);
visited[i]=1;
rear++;
que[rear]=i;
}
}
}
}
void main()
 {
 int ch ,i;
 do
 {
 printf("\nMENU ");
 printf("\n1.Create\n2.dfs\n 3.bfs\n4.Exit\nEnter choice :");
scanf("%d",&ch);
switch(ch)
{
case 1: create ();
	break;
case 2:
		for(i=1;i<MAX;i++)
		visited[i]=0;
	printf("enter the vertex to be searched");
	scanf("%d",&v);
	 dfs( v);
	break;
case 3:
		for(i=1;i<MAX;i++)
		visited[i]=0;
       printf("enter the vertex to be searched");
	scanf("%d",&v);
	 bfs( v);
	break;
case 4:break;
default:  printf("wrong choice");
}
}
while(ch!=4);
}





















