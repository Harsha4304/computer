#include<stdio.h>
int main()
{
	int n;
	printf("enter no of frames: \n");
	scanf("%d", &n);
	int size;
	printf("enter sliding window size: \n");
	scanf("%d", &size);
	int v[n];
	for (int i = 0; i < n; i++)
	{
		v[i] = 0;
	}
	int frames = 0;
	while (frames < n)
	{
		printf("Frames sent : ");
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (v[i] != 1)
			{
				printf("%d ", i);
				count++;
			}
		if (count == size)
		break;
		}
		printf("\nwhat are the frames received : \n");
		int a;
		for (int i = 0; i < count; i++)
		{
			scanf("%d", &a);
			if (a != -1)		
			{
				printf("Acknowledgement for frame %d received \n", a);
				v[a] = 1;
               frames++;
            }
        } 
    }
return 0;
}
