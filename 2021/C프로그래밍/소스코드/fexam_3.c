#include <stdio.h>

struct arr_name //����ü ����
{
    char value[5];

};

void printArr(int value[], int n)// �迭��� �Լ�
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
	struct arr_name arr;
	int n = sizeof(arr.value) / sizeof(int); // �迭�� ����
    printf("���� 5���� �Է��ϼ��� ");
    scanf("%d %d %d $d %d",&arr.value);
   
    printf("�Էµ� ����:");
	printArr(*arr.value, n);
	mySort(*arr.value, n);
	printf("���ĵ� ����:");
    printArr(*arr.value, n);

	return 0;
}

