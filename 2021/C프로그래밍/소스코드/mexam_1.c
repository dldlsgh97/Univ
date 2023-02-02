#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int count = 0;
    int big = 0;
    int gcd = 0;

    printf("최대공약수 문제를 위한 두수를 입력하세요: ");   
    scanf("%d %d",&num1,&num2); //두 수 입력

    printf("%d 의 약수: ",num1);    //num1의 약수 구하기
    for (int i = 1; i<=num1; i++){
        if(num1%i==0){
            printf("%d,",i);
            count++;
        }
    }
    printf("(%d 개)\n",count);
    count = 0;
    
    printf("%d 의 약수: ",num2);    //num2의 약수 구하기
    for (int i = 1; i<=num2; i++){
        if(num2%i==0){
            printf("%d,",i);
            count++;
        }
    }
    printf("(%d 개)\n",count);

    printf("%d ,%d 의 최대 공약수: ",num1,num2);    
    if(num1>num2){  //num1,num2중 큰수 구하기
        big=num1;   
    }
    else{
        big=num2;
    }

    for (int i=1; i<=big; i++){  //num1,num2의 공약수 구해서 변수gcd 덮어씌우기
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("%d",gcd);
}