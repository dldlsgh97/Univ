#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main(){
    srand(time(NULL));

    int arrEven[10];
    int arrEven_cnt =0;
    int arrOdd[10];
    int arrOdd_cnt =0;
    int a;
   
    for (int i = 0; i <10; i++){
        a = rand()%10;
         printf("%d ", a);
        if(a%2 ==0){
            arrEven[arrEven_cnt] = a;
            arrEven_cnt += 1;
        }
        else{
            arrOdd[arrOdd_cnt]=a;
            arrOdd_cnt +=1;
        }

    }
    printf("\n");
    printf("arrEven : ");
    for (int i = 0; i<arrEven_cnt; i++)
        printf("%d ",arrEven[i]);
        printf("\n");
    
    printf("arrOdd : ");
    for (int i = 0; i<arrOdd_cnt; i++)
        printf("%d ",arrOdd[i]);
        
}