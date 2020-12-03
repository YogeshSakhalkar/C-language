#include<stdio.h>
void myfun();
void main()
{
	myfun(1);
}
void myfun(int a)
{
	printf("%d\n",a);
	a++;
	if(a<3)
		myfun(a);
	printf("\nHello %d",a);
}