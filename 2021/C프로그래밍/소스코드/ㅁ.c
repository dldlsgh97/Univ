#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sss = 0;
	int five = 0;
	int four = 0;
	int one = 0;
	int two = 0;
	int three = 0;
	int i = 0;
	int sum = 0;

	while(i<=10){
		int a = rand()%5+1;
		int b = rand()%5+1;
		int c = rand()%5+1;

		sum = a+b+c;
		printf("a: %d ",a);
		printf("b: %d ",b);
		printf("c: %d ",c);
		printf("sum : %d \n",sum);

		if(sum==8||sum==13){one++;}
		else if(sum==10||sum==11){two++;}
		else if(sum==9||sum==12){three++;}
		else if(sum==6||sum==7||sum==14||sum||15){four++;}
		else if(sum==4||sum==5||sum==16){five++;}
		else{sss++;}
		i++;

	}
	printf("num: %d "+i);
	printf("C: %d "+one);
	printf("B: %d "+two);
	printf("A: %d "+three);
	printf("S: %d "+four);
	printf("SS: %d "+five);
	printf("SSS: %d "+sss);
}

