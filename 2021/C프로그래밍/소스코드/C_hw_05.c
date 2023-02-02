#include <stdio.h>
#include <string.h>


int main(){
    char arr[50];   
    char arr1[50];  
    gets(arr);  
    int s = strlen(arr);    
    int n = 0;
    for (int i = 0; i<s; i++){
        for(int j=0; j<s; j++){
            if(n<i && arr[i]!=arr1[j]){
                arr1[n]=arr[i];
                n++;
                
            }
            else{

            }
        }


    }
    printf("%s\n",arr1);

}

