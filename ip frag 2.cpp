#include<stdio.h>
int main()
{
int pktsize,headersize, MTU,i=1;
printf("\n Enter pktsize headersize MTU of sending packet:\n");
scanf("%d%d%d",&pktsize,&headersize,&MTU);
int numberoffragments,len,offset,MF,length;
numberoffragments=pktsize-headersize;
len=MTU-headersize;
printf("ID \t Length \t Offset \t MF\n");
while(numberoffragments>=0)
{
 if(numberoffragments>=len)
 {
 MF=1;
 length=len;
 }
 else
 {
 MF=0;
 length=numberoffragments;
 }
 offset=len*(i-1);
 printf("%d\t%d\t%d\t%d\n",i,length,offset,MF);
 i++;
 numberoffragments=numberoffragments-len;
}
}
