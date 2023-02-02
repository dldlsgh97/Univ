#include <stdio.h>

// 배열 출력 함수
void printArr(int* value, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", value[i]);
	printf("\n");
}

// 정렬 실행 함수
void mysort(int* value, int n)
{
    int arr[5];
    int min = 1000;

    for (int i = 0; i<=4; i++){
        if(min > value[i] ){
            min = value[i];
        }
        }
        arr[0] = min;
        for (int i = 0; i<=4; i++){
        if(min == value[i] ){
            value[i]=0;
        }
        }

    for (int i = 0; i<=4; i++){
        if(min < value[i] ){
            min = value[i];
        }
        }
        for (int i = 0; i<=4; i++){
        if(min == value[i] ){
            value[i]=0;
        }
        }
        arr[4] = min;

    for (int i = 0; i<=4; i++){
        if(min > value[i] ){
            min = value[i];
        }
        }
        arr[1] = min;
        for (int i = 0; i<=4; i++){
        if(min == value[i] ){
            value[i]=0;
        }
        }
    
    for (int i = 0; i<=4; i++){
        if(min < value[i] ){
            min = value[i];
        }
        }
        for (int i = 0; i<=4; i++){
        if(min == value[i] ){
            value[i]=0;
        }
        }
        arr[3] = min;
    
    for (int i = 0; i<=4; i++){
        if(min > value[i] ){
            min = value[i];
        }
        }
        arr[2] = min;
        for (int i = 0; i<=4; i++){
        if(min == value[i] ){
            value[i]=0;
        }
        }
    
    for (int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(void)
{
	int value[5];
	int n = 5; 

    for (int i=0; i<=4; i++){
        printf("%d번째 수를 입력하세요 ",i+1);
        scanf("%d",&value[i]); 
    }

	mysort(value,n);
    printArr(value,n);

	return 0;
}
