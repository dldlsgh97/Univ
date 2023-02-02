#include <stdio.h>

void arr_printf(int arr[],int* p_r_cnt,int* p_c_cnt);
void arr_trans(int* arr, int* p_r_cnt, int*p_c_cnt,int* tarr);

void main(){
    int arr[] = {1,2,3,4,5,6}; //�Է¹迭
    int* tarr = (int*)malloc(sizeof(arr)); //��¹迭

    int arr_r = 2; //����� ��ũ��
    int arr_c = 3; //����� ��ũ��

    int* p_r_cnt = &arr_r;  //��
    int* p_c_cnt = &arr_c;  //��

    printf("IN : \n");
    arr_printf(arr,p_r_cnt,p_c_cnt); //������

    printf("------- \n");
    arr_trans(arr,p_r_cnt,p_c_cnt,tarr); // ��ġ��Ļ���

    printf("OUT : \n");
    arr_printf(tarr,p_c_cnt,p_r_cnt); //������
}

void arr_printf(int arr[],int* p_r_cnt,int* p_c_cnt){ //�������Լ�
    for(int i = 0; i < *p_r_cnt; i++){ //��
        for (int j = 0; j < *p_c_cnt; j++){ //��
            printf("%d",arr[*p_c_cnt * i + j]);
        }
            printf("\n");

    }
}

void arr_trans(int* arr, int* p_r_cnt, int*p_c_cnt,int* tarr){
    for (int i = 0; i < *p_r_cnt; i++){
        for (int j = 0; j < *p_c_cnt; j++){
            *(tarr + j * 2 + i) = *(arr + i * 3 + j);   //{1,2,3,4,5,6} -> {1,4,2,5,3,6}
        }
    }
}