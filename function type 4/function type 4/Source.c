#include<stdio.h>
int myfun(int, int);

	void main()
{
	int a=10,b=50;
	int res=myfun(a,b);
	printf("the addition of 2 number is %d",res);
}

int myfun(int p,int q)
{
	int c=p+q;
	return c;
}