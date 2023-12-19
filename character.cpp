#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j;
    printf("enter the string:");
        //scanf("%[^\n]s",a);
        scanf("%s",a);
    j=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='E'||a[i]=='F')
        {
            b[j]='E';
            b[j+1]=a[i];
            j=j+2;
          }
        else
        {
            b[j]=a[i];
            j++;
        }
    }
        printf("%s",b);
        return 0;
}
