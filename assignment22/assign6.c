#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int size, max = 0, i;
    printf("Enter the size of array:");
    scanf("%d", &size);
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed:");
    }
    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        if (*(ptr + i) > max)
            max = (*(ptr + i));
    }
    printf("largest no is %d", max);
    free(ptr);
    printf("\n");
}