#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void main()
{
    
    int arr[10];
    srand(time(NULL));
    for (int i=0; i<10; i++)
    {
        arr[i] = rand() % 5 + 4;
    }
    for (int i=0; i<10; i++)
    {
        printf("arr: %d ",arr[i]);
    }
    return 0;
    
}