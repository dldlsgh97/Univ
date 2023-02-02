#include<stdio.h>
#include <math.h>

int main()
{
    int a=0,i=0,b=0,c=0,d=0,e=0,f=0;
    for (i =1; i <=10; i++)
    {
        a=a+i;
    } 
    b=(a/10);
    for (i =1; i <=10; i++)
    {
        d=(i-b)*(i-b);
    }
    e=e+d;
    f=e/10;
    c=sqrt(f);
    printf("1부터 10까지의 자연수의 합: %d\n",a);
    printf("1부터 10까지의 합의 평균: %d\n",b);
    printf("1부터 10까지의 자연수의 표준편차: %d\n",c);
    printf("1부터 10까지의 자연수의 분산: %d\n",f);
}