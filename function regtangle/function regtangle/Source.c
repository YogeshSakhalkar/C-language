#include<stdio.h>

int myfun();
int myfun1();

void main()
{
	int area,l,b,parameter;
	printf("enter the length\n");
	scanf("%d",&l);
	printf("\nenter the breath\n");
	scanf("%d",&b);
	area=myfun(l,b);
	printf("\nthe area is %d\n ",area);
	parameter=myfun1(l,b);
	printf("\nthe perameter of  retangle is %d\n\n\n",parameter);

}

int myfun(int p,int q)
{
	int area;
	area=p*q;
	return area;
}

int myfun1(int p,int q)
{
	int parameter;
	parameter=(2*p)+(2*q);
	return parameter;
}