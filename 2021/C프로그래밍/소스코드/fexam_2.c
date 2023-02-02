#include <stdio.h>
#include <string.h>

int check_value(char* arr, int len, char value){
    for (int n=0; n<len; n++){
        if(arr[n] == value) return 1;
    }
    return 0;
}

int main(){
    char input[50];
    char output[50];
    while(1){
        int a = 1;
        printf("문장을 입력하세요: \n");
        gets(input);

        int len = strlen(input);
        int i = 0;
        for (int n = 0; n<=len; n++){
            if(check_value(output, i, input[n])) continue;
            output[i] = input[n];
            i++;
        }
        for (int a=0; a<=strlen(output); a++){
            printf("%c, ",output[a]);
            
        }
        printf("\n");
    }
}