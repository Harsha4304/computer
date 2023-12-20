#include<stdio.h>
int main()
{
	int n,i,j,k,p,q=1,r,sum=0;
	printf("enter bucket :  ");
	scanf("%d",&n);
	printf("output rate :  ");
	scanf("%d",&r);
	while(q)
	{
		printf("input rate :  ");
		scanf("%d",&p);
		if(p>r)
		{
			printf("packets transmitted : %d\n",r);
			if(sum+p-r>n)
			{
				printf("packets lost :  %d\n",sum+p-r-n);
				sum=n;
			}
			else
			{
				printf("packets lost : 0\n");
				sum=sum+p-r;
			}
			printf("bucket status : %d \n",sum);
		}
		else if(p==n)
		{
			printf("packets transmitted : %d\n",r);
			printf("packets lost : 0\n");
			printf("bucket status : %d\n",sum);
		}
		else
		{
			k=sum+p;
			if(k>0 && k<r)
			{
				printf("packets transmitted : %d\n",k);
				sum=0;
			}
			else
			{
				printf("packets trasmitted : %d\n",r);
				sum=sum+p-r;
			}
			printf("packets lost : 0\n");
			printf("bucket status : %d\n",sum);
		}
		printf("continue ? ");
		scanf("%d",&q);
		if(q==0)
		break;
		printf("\n");
	}
}
