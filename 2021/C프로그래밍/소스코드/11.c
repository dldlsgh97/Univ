#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int c = 0;
    int sum = 0;
    int n = 100;

    while(1){
        a = b;
        b = a+b;

        sum +=b;
        if(n>=sum){
            break;
        }
        printf("%d",b);
    }
    printf("%d",sum);
}