#include<stdio.h>
#include<string.h>
char msg[100],gf[100],check[100];
int n,N;
void xor()
{
	int j;
	for(j=1;j<N;j++)
	{
		check[j]=((check[j]==gf[j])?'0':'1');
	}
}
void receiver(int N)
{
	printf("data received  : %s",msg);
	crc();
	int i;
	for(i=0;i<N-1 && check[i]=='0';i++);
	if(i==N-1)
	printf("\nno error");
	else
	printf("error");
}
void crc()
{
	int i,j;
	for(i=0;i<N;i++)
	{
		check[i]=msg[i];
	}
	do
	{
		if(check[0]=='1')
			xor();
		for(j=0;j<N-1;j++)
		
			check[j]=check[j+1];
		
		check[j]=msg[i++];
	}while(i<=n+N-1);
}

int main()
{
	int i;
	printf("enter msg : ");
	scanf("%s",&msg);
	printf("enter gf : ");
	scanf("%s",&gf);
	n=strlen(msg);
	N=strlen(gf);
	for(i=n;i<n+N-1;i++)
	{
		msg[i]='0';  //N-1 zeroes
	}
	printf("message with N-1 zero : %s",msg);
	crc();
	printf("check value : %s",check);
	for(i=n;i<n+N-1;i++)
	{
		msg[i]=check[i-n];
	}
	printf("final mesg : %s",msg);
	receiver(N);
	return 0;
}
