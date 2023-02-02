#include <stdio.h>


void minmax(int arr1[]){
    int max = 0;
    int min = 10000000;

    for (int i=0; i<=4; i++ ){
        if(max < arr1[i]){
            max = arr1[i];
        }
        if(min > arr1[i]){
            min = arr1[i];
        }
    }
    printf("최대값은 %d입니다.\n",max);
    printf("최소값은 %d입니다.",min);


}


void main(){
    int arr1[5];
    
    for (int i=0; i<=4; i++){
        printf("%d번째 숫자를 입력하세요: ",i+1);
        scanf("%d",&arr1[i]);
    }
    
    minmax(arr1);

    
}

