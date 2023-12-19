#include<stdio.h>
#include<math.h>
int main()
{
	int u,v,i,j,k,n,min;
	int s[10],cost[10][10],dist[10],path[10];
	printf("enter no.of nodes:");
	scanf("%d",&n);
	printf("enter adjacency costmatrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	printf("enter source node:");
	scanf("%d",&v);
	for(i=1;i<=n;i++)
	{
		s[i]=0;
		path[i]=v;
		dist[i]=cost[v][i];
	}	
	dist[v]=0;
	for(k=2;k<=n;k++)
	{
		min=999,u=0;
		for(i=1;i<=n;i++)
		{
			if(s[i]!=1)
			{
				if(min>dist[i])
				{
					u=i;
					min=dist[i];
				}
			}
		}
		s[u]=1;
		for(i=1;i<=n;i++)
		{
			if(s[i]!=1)
			{
				if(dist[i]>(min+cost[u][i]))
				{
					dist[i]=min+cost[u][i];
					path[i]=u;
				}
			}
		}
	}
	printf("\n");
	printf("\nDistance: nodepath\n");
	for(i=1;i<=n;i++)
	{
		printf("\n%d:",dist[i]);
		printf("%d",i);
		j=i;
		do
		{
			printf("-->%d",path[j]);
			u=path[j];
			j=u;
		}while(u!=v);
}
}
