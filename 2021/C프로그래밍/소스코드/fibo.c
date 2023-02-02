#include <stdio.h>

int main()
{
	int a=0, b=1,c=0, i=0, n=0;
	printf("input number: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

