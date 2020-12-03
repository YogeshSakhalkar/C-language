#include<stdio.h>
void main()
{
	int a=100,b=220,c=30;
	if(a<b)
		if(c<b)
			printf("the greatest number is %d \n",b);
		if(a<c)
			printf("the greatest number is %d \n",c);
		else printf("the greatest number is %d \n",a);
}