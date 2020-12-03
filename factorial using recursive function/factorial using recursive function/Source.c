#include<stdio.h>
int fact=1;
int myfun(int);
void main()
{
	int fact;
	fact=myfun(5);
	printf("\n The factorial is :%d",fact);
}

int myfun(int a)
{
	printf("\n start %d",a);
	fact=fact*a;
	if(a>1){
		a--;
		myfun(a);
	}
	return fact;
}