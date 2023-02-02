#include <stdio.h>

void main()
{
    int arr[10] = {1,2,3,4,5};
    int arr_c = 1;
    int arr0[10];
    int t = 0;
    int a = 0;
    for (int i =0; i<9; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    t = arr[0];
    for (int i = 1; i < 10; i++){
        a = arr[i];
        arr0[arr_c] = a;
        arr_c += 1;     
    }
    for (int i = 1; i < 10; i++){
        if(arr0[i]==5){
                arr0[i+1]=t;
            }
            printf("%d ",arr0[i]);
    }
        
        printf("\n");
        
    

}