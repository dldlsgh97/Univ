#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int count = 0;
    int big = 0;
    int gcd = 0;

    printf("�ִ����� ������ ���� �μ��� �Է��ϼ���: ");   
    scanf("%d %d",&num1,&num2); //�� �� �Է�

    printf("%d �� ���: ",num1);    //num1�� ��� ���ϱ�
    for (int i = 1; i<=num1; i++){
        if(num1%i==0){
            printf("%d,",i);
            count++;
        }
    }
    printf("(%d ��)\n",count);
    count = 0;
    
    printf("%d �� ���: ",num2);    //num2�� ��� ���ϱ�
    for (int i = 1; i<=num2; i++){
        if(num2%i==0){
            printf("%d,",i);
            count++;
        }
    }
    printf("(%d ��)\n",count);

    printf("%d ,%d �� �ִ� �����: ",num1,num2);    
    if(num1>num2){  //num1,num2�� ū�� ���ϱ�
        big=num1;   
    }
    else{
        big=num2;
    }

    for (int i=1; i<=big; i++){  //num1,num2�� ����� ���ؼ� ����gcd ������
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("%d",gcd);
}