#include <stdio.h>

int arr_printf(int* arr1,int* r,int* c){ //�������Լ�
    printf("7\n");
    int n = 0;
    for(int j = 1; j < *r; j++){
        printf("8\n");
        for (int i = 0; i < c; i++){
            n = (*c *j)+i;
            printf("%d",arr1[n]);
        }
        printf("\n");
        printf("11\n");
    }
}

void main(){
    int arr1[] = {1,2,3,4,5,6}; //�Է¹迭
    printf("1\n");

     int arr_r = 2; //����� ��ũ��
     printf("2\n");
    int arr_c = 3; //����� ��ũ��
    printf("3\n");

    int* r = &arr_r;
    printf("4\n");
    int* c = &arr_c;
    printf("5\n");

    arr_printf(arr1,r,c);
    printf("6\n");
}

