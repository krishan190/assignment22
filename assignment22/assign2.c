#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, sum = 0;
    int size;
    printf("Enter a size of array:");
    scanf("%d", &size);

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation failed:");
        return 0;
    }
    printf("The entered %d values", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("Average is %d", sum / size);
    free(ptr);
    printf("\n");
}