#include <stdio.h>

// �迭 ��� �Լ�
void printArr(int value[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%3d", value[i]);
	printf("\n");
}
// ���� ���� ���� �Լ�
void mySort(int* value, int n)
{
	int i, j;
	int min = 0;
	int temp = 0; // swap�� ���� ���� ���� (�ӽ�)

	// i for�� : 
	for (i = 0; i < n - 1; i++)
	{
		min = i; // �ε���
		for (j = i + 1; j < n; j++)
		{
			if (value[min] > value[j])
				min = j;
		}
        
		// �˻��� ���� ���� ���� ���� value[i]�� swap ����.
		temp = value[i];
		value[i] = value[min];
		value[min] = temp;
	}
}
int main(void)
{
	int value[5] ;
	int n = sizeof(value) / sizeof(int); // �迭�� ����

    for (int i = 0; i<n; i++){
        printf("%d��° ���� �Է��ϼ��� ",i+1);
        scanf("%d",&value[i]);
    }
    printf("�Էµ� ����:");
	printArr(value, n);
	mySort(value, n);
	printf("���ĵ� ����:");
    printArr(value, n);

	return 0;
}
