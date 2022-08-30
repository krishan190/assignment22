#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation failed:");
    }
}