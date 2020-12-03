#include<stdio.h>
void myfun();
 
void main()
{
	int a=10;
	int b=30;
	myfun(a,b);
}

void myfun(int p,int q)
{
	int c=p+q;
	printf("the addtion is %d",c);
}