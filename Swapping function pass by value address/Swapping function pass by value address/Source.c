#include<stdio.h>
//pass by value
void myswap(int,int);
void main()
{
	int a=10;
	int	b=20;
	printf("\n The value in A before is : %d",a);
	printf("\n The value in B before is : %d",b);
	myswap(a,b);

}

void myswap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\n The value in A is : %d",x);
	printf("\n The value in B is : %d",y);
}

//pass by address
/*void myswap(int*,int*);
void main1()
{
	int a=10;
	int	b=20;
	printf("\n The value in A before is : %d",a);
	printf("\n The value in B before is : %d",b);
	myswap(&a,&b);
	printf("\n The value in A is : %d",a);
	printf("\n The value in B is : %d",b);
}

void myswap(int* x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}*/