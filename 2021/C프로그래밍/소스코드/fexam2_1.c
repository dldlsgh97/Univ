#include <stdio.h>
#include <string.h>

int check_value(char* input, int len, char output){ //문자열에 포함된 문자 종류 저장 함수
    for (int n=0; n<len; n++){
        if(input[n] == output) return 1;
    }
    return 0;
}

struct arr_name //구조체 생성
{
    char input[50];     //입력 배열
    char output[50];    //출력 배열
};

int main(){
    struct arr_name arr;
    while(1){   //무한반복
        printf("문장을 입력하세요: \n");    
        gets(arr.input);    //문자열 임력

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