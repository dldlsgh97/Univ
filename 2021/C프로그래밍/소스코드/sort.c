#include <stdio.h>

// 배열 출력 함수
void printArr(int value[], int n)
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

	// i for문 : 
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
	int value[5] ;
	int n = sizeof(value) / sizeof(int); // 배열의 길이

    for (int i = 0; i<n; i++){
        printf("%d번째 수를 입력하세요 ",i+1);
        scanf("%d",&value[i]);
    }
    printf("입력된 숫자:");
	printArr(value, n);
	mySort(value, n);
	printf("정렬된 숫자:");
    printArr(value, n);

	return 0;
}
