#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;

    printf("Before free %d\n", *ptr);
    free(ptr);
    printf("after free %d\n", *ptr);
    printf("\n");
}