# include <stdio.h>


int main()

{

char a[50];
char b[50];
gets(a);


int i, n=1;
b[0] = a[0];

for(i=1; i<50;i++)

  if(a[i] != b[n-1]) b[n++]=a[i];

printf("%s\n",b);

}