#include <stdio.h>
int max(int arr[]){
    int max = 0;
    for (int i=0; i<=4; i++ ){
        if(max<arr[i]){
            max=arr[i];
        }
}
    return max;
}

int min(int arr[]){
    int min = 100000000;
    for (int i=0; i<=4; i++ ){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

void minmax(int arr[]){
    int maxvalue = 0;
    int minvalue = 0;
    maxvalue = max(arr);
    minvalue = min(arr);

    printf("최대값은 %d입니다.\n",maxvalue);
    printf("최소값은 %d입니다.",minvalue);


}
void main(){
    int arr[5];
    
    
    for (int i=0; i<=4; i++){
        printf("%d번째 숫자를 입력하세요: ",i+1);
        scanf("%d",&arr[i]);
    }

    minmax(arr);
    
}