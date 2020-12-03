#include<stdio.h>
void main()
{
	int a=10,b=0;
	printf("%d %d",a,b);

	b=a++;
	printf("\n%d %d",a,b);
	
	b=++a;
	printf("\n%d %d \n",a,b);
	printf("\n");
}
