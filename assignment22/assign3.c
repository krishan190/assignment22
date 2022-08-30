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
        printf("Memory allocation failed:");
    }
    printf("entered %d values:", size);
    for (i = 0; i < size; i++)
    {
        //stored value of array by using address
        scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("sum of %d number:%d", size, sum);
    free(ptr);
    printf("\n");
}