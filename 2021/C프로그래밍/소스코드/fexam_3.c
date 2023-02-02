#include <stdio.h>

struct arr_name //구조체 생성
{
    char value[5];

};

void printArr(int value[], int n)// 배열출력 함수
{
	for (int i = 0; i < n; i++)
		printf("%3d", value[i]);
	printf("\n");
}
// 선택 정렬 실행 함수
void mySort(int* value, int n)
{
	int i, j;
	int min = 0;
	int temp = 0; // swap에 쓰기 위한 변수 (임시)

 
	for (i = 0; i < n - 1; i++)
	{
		min = i; // 인덱스
		for (j = i + 1; j < n; j++)
		{
			if (value[min] > value[j])
				min = j;
		}
        
		// 검사한 값중 가장 작은 값과 value[i]값 swap 과정.
		temp = value[i];
		value[i] = value[min];
		value[min] = temp;
	}
}
int main(void)
{
	struct arr_name arr;
	int n = sizeof(arr.value) / sizeof(int); // 배열의 길이
    printf("숫자 5개를 입력하세요 ");
    scanf("%d %d %d $d %d",&arr.value);
   
    printf("입력된 숫자:");
	printArr(*arr.value, n);
	mySort(*arr.value, n);
	printf("정렬된 숫자:");
    printArr(*arr.value, n);

	return 0;
}

