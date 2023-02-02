#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void main()
{
    
    int arr[10];
    srand(time(NULL));
    for (int i=0; i<10; i++)
    {
        arr[i] = rand() % 5 + 5;
    }
    printf("rand arr[5~9]: ");
    
    for (int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    
}