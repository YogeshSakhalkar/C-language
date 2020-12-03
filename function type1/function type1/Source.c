#include<stdio.h>
void myfun();


void main()
{
	myfun();
	printf("\n\n\n");
}

void myfun(){
	int a=10;
	int b=20;
	int c=a+b;
	printf("the addition is %d", c);
}