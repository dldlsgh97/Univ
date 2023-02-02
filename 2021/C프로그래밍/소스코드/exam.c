#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void main()
{ 
    int arr[10];
    int arrOdd[10];
    int arrEven[10];
    int num=0;
    int j=0;
    int a=0;
    srand(time(NULL));  //임의의 값 생성
    for (int i=0; i<10; i++)
    {
        num = rand() % 9 ;
        arr[i]=num;
        if(num%2==0){   //짝수 구분
            arrEven[j]=num;
            j++;
        }
        if(num%2==1){   //홀수 구분
            arrOdd[a]=num;
            a++;
        }
    }
    printf("rand arr[0~9]: ");  
    for (int i=0; i<10; i++)    
    {
        printf("%d ",arr[i]);   //임의의 값이 들어있는 배열출력
    }
    printf("\n");

    printf("arrOdd: ");
    for (int c=0; c<a; c++)
    {
        printf("%d ",arrOdd[c]);    //홀수가 들어있는 배열 출력
    }
    printf("\n");

    printf("arrEven: ");
    for (int b=0; b<j; b++)
    {
        printf("%d ",arrEven[b]);   //짝수가 들어있는 배열 출력
    }
    printf("\n");
}