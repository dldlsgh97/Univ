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

    printf("�ִ밪�� %d�Դϴ�.\n",maxvalue);
    printf("�ּҰ��� %d�Դϴ�.",minvalue);


}
void main(){
    int arr[5];
    
    
    for (int i=0; i<=4; i++){
        printf("%d��° ���ڸ� �Է��ϼ���: ",i+1);
        scanf("%d",&arr[i]);
    }

    minmax(arr);
    
}