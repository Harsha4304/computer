#include<stdio.h>
#include<conio.h>
int main()
{
	int tsize,hsize,mtu,total,msize,fsize,n,id,t=0,mf=1,m,l=0;
	printf("enter total size");
	scanf("%d",&tsize);
	printf("enter header size");
	scanf("%d",&hsize);
	printf("enter  mtu");
	scanf("%d",&mtu);
	printf("enter identification number");
	scanf("%d",&id);
   //msize=tsize-hsize;
	fsize=mtu-hsize;
	while(hsize%4!=0)
	{
		hsize=hsize+1;
	}
	msize=tsize-hsize;
	while(fsize%8!=0)
	{
		fsize=fsize-1;
	}
	if(msize%fsize==0)
	{
		n=(msize/fsize);
	}
	else
	{
	    n=(msize/fsize)+1;	
	}
	printf("total no of fragments is %d:\n",n);
	m=msize;
	printf("fnumber     id     length    offset   mf\n");
	while(1)
	{
		l=l+1;
		if((m-fsize)>=0)
		{
			printf("%d   %d    %d   %d    %d\n",l,id,fsize,t/8,mf);
			m=m-fsize;
			t=t+fsize;
		}
		else
		{
			mf=0;
			printf("%d   %d    %d   %d    %d\n",l,id,m,t/8,mf);
			break;
		}
	}	
}
