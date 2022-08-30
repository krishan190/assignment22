#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int size, i, max = 0, min;
    printf("Enter the size of the array:");
    scanf("%d", &size);

    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed:");
    }

    printf("Entered %d value", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        if (*(ptr + i) > max)
            max = (*(ptr + i));
    }
    for (i = 1; i < size; i++)
    {
        min = (*(ptr + 0));
        if (*(ptr + i) < min)
            min = (*(ptr + i));
    }
    printf("Maximum values of array is :%d\n", max);
    printf("Minimum values of array is:%d", min);
    free(ptr);
    printf("\n");
}