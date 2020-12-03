#include<stdio.h>
void Simple();

void main()
{
	int fact,num;
	printf("enter the number \n");
	scanf_s("%d",&num);
	Simple(num);
}
void Simple(int num)
{
	int i=1,fact=1;
	for(printf("the factorial of %d is ",num);i<=num;i++)
		fact=fact*i;
	printf("%d\n",fact);
}