#include<stdio.h>
void main()
{
	int marks=0;
	printf("enter the marks \n");
	scanf("%d",&marks);
	if(marks>=70)
		printf("\n dstinction");
	else if(marks>=60)
		printf("\n first class");
	else if(marks>=50)
		printf("\n second class");
	else if(marks<=49)
		printf("\n pass class");
	else if(marks<=34)
		printf("fail");
}
