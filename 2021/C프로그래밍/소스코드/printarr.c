#include <stdio.h>

int arr_printf(int* arr1,int* r,int* c){ //행렬출력함수
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
    int arr1[] = {1,2,3,4,5,6}; //입력배열
    printf("1\n");

     int arr_r = 2; //행렬의 행크기
     printf("2\n");
    int arr_c = 3; //행렬의 열크기
    printf("3\n");

    int* r = &arr_r;
    printf("4\n");
    int* c = &arr_c;
    printf("5\n");

    arr_printf(arr1,r,c);
    printf("6\n");
}

