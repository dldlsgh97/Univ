#include <stdio.h>
#include <stdio.h>


int main(){
    char arr[100];
    scanf("%[ \n]s%[ \n]s%[ \n]s",arr);
    gets(arr);
    char arr1[100];
    int s = strlen(arr);
    for (int i = 0; i < s; i++)
    { 
        int p = 0;
        int k = 0;
        
        while (p < i && arr[p] != arr[i])
            p++;
        if (p == i)
        { 
            arr1[k] = arr[i];
            k++;
        }
    }
    printf("%s\n",arr1);
    printf("%c\n",arr1[0]);
    printf("%c\n",arr1[1]);
    printf("%c\n",arr1[2]);
}

