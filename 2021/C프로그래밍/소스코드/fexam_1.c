#include <stdio.h>

void arr_printf(int arr[],int* p_r_cnt,int* p_c_cnt);
void arr_trans(int* arr, int* p_r_cnt, int*p_c_cnt,int* tarr);

void main(){
    int arr[] = {1,2,3,4,5,6}; //입력배열
    int* tarr = (int*)malloc(sizeof(arr)); //출력배열

    int arr_r = 2; //행렬의 행크기
    int arr_c = 3; //행렬의 열크기

    int* p_r_cnt = &arr_r;  //행
    int* p_c_cnt = &arr_c;  //열

    printf("IN : \n");
    arr_printf(arr,p_r_cnt,p_c_cnt); //행렬출력

    printf("------- \n");
    arr_trans(arr,p_r_cnt,p_c_cnt,tarr); // 전치행렬생성

    printf("OUT : \n");
    arr_printf(tarr,p_c_cnt,p_r_cnt); //행렬출력
}

void arr_printf(int arr[],int* p_r_cnt,int* p_c_cnt){ //행렬출력함수
    for(int i = 0; i < *p_r_cnt; i++){ //행
        for (int j = 0; j < *p_c_cnt; j++){ //열
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