#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of frames: ");
    scanf("%d", &n);

    int size = 0;
    printf("Enter sliding window size: \n");
    scanf("%d", &size);

    int frames = 0;
    while (frames < n)
    {
        printf("Frames sent: ");
        int count = 0;
        for (int j = 0; j < size && j + frames < n; j++)
        {
            count++;
            printf("F%d ", frames + j);
        }
        printf("\n");

        int temp[count];
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &temp[j]);
        }

        for (int j = 0; j < count; j++)
        {
            if (temp[j] == -1)
            {
                printf("Neg Ack received\n");
                break;
            }
            printf("Ack received for F%d\n", frames);
            frames++;
        }
    }

    return 0;
}
