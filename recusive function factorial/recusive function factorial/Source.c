#include<stdio.h>
void myfun(int);
int i=1,fact=1;
void main()
{
	int fact=5;
	myfun(fact);

}

void myfun(int input)
{
	if(i<=input)
	{
		fact=fact*input;
		myfun(--input);
	}
	else
	{
	printf("\nThe Factorial is %d",fact);
	printf("\n\n");
	}
}