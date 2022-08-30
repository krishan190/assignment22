#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i;
    int size, sum = 0;
    printf("Enter the size of array:");
    scanf("%d", &size);
    if (ptr == NULL)
    {
        printf("Memory Allocation failed:");
    }
    ptr = (int *)malloc(sizeof(int));
    printf("Entered %d values of array", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("sum of %d number %d", size, sum);
    free(ptr);
    printf("\n");
}