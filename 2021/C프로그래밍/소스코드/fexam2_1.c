#include <stdio.h>
#include <string.h>

int check_value(char* input, int len, char output){ //���ڿ��� ���Ե� ���� ���� ���� �Լ�
    for (int n=0; n<len; n++){
        if(input[n] == output) return 1;
    }
    return 0;
}

struct arr_name //����ü ����
{
    char input[50];     //�Է� �迭
    char output[50];    //��� �迭
};

int main(){
    struct arr_name arr;
    while(1){   //���ѹݺ�
        printf("������ �Է��ϼ���: \n");    
        gets(arr.input);    //���ڿ� �ӷ�

        int len = strlen(arr.input);    
        int i = 0;
        for (int n = 0; n<=len; n++){
            if(check_value(arr.output, i, arr.input[n])) continue;
            arr.output[i] = arr.input[n];
            i++;
        }
        for (int a=0; a<strlen(arr.output); a++){
            printf("%c, ",arr.output[a]);
            
        }
        printf("\n");
    }
}