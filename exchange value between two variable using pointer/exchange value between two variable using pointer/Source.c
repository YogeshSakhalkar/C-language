#include<stdio.h>

void main()
{
	int a=10;
	int *temp;
	temp=&a;
	printf("%d",a);
	printf("%d",*temp);
}