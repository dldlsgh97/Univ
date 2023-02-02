#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void main()
{
    
    int arr[10];
    int arrOdd[10];
    int arrEven[10];
    srand(time(NULL));
    for (int i=0; i<10; i++)
    {
        arr[i] = rand() % 9 ;
    }
    printf("rand arr[0~9]: ");
    
    for (int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int num=0;
    for(int i =0; i<10; i++)
    {
        if(arr[i]%2==0){
            int j=0;
            num=arr[i];
            arrEven[j]=num;
            j++;
        }
        else if(arr[i]%2==1){
            int a=0;
            num=arr[i];
            arrOdd[a]=num;
            a++;
        }
    }
    printf("arrOdd: ");
    for (int i=0; i<10; i++)
    {
        printf("%d ",arrOdd[i]);
    }
    printf("\n");
    printf("arrEven: ");
    for (int i=0; i<10; i++)
    {
        printf("%d ",arrEven[i]);
    }
    printf("\n");
}