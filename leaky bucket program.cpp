#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,b,r;
	int loss,trans,left=0;
	printf("enter bucket size:");
	scanf("%d",&b);
	printf("enter rate of transmission:");
	scanf("%d",&r);
	int c=1;
	do
	{
		printf("input no of packets:");
		scanf("%d",&n);
		n=n+left;
		if(n<=b)
		{
			if(n<=r)
			{
				loss=0;
				trans=n;
				left=0;
			}
			else
			{
				loss=0;
				trans=r;
				left=n-trans;
			}
		}
		else
		{
			loss=n-b;
			trans=r;
			left=n-r-loss;
		}
		printf("packets loss%d: packets transmitted%d: space left %d: ",loss,trans,b-left);
		printf("enter to continue 1 else 0");
		scanf("%d",&c);
	}while(c==1);
	return 0;	
}
