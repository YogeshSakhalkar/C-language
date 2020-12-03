#include<stdio.h>
void main()
{
	int a=0;
	printf("enter the number");
	scanf("%d",&a);
	if(a>=60)
		printf("First Class");
	if(a>=50 && a<=59)
		printf("Second Class");
	if(a>=35 && a<=49)
		printf("Pass class");
	if(a<=34)
		printf("Fail");
	printf("\n\n\n");
}