#include<stdio.h>
void main()
{
	int a=0;
	int b=20;
	int c=0,d;
	printf("%d %d %d \n",a,b,c);
	c=a++&&b++;
	printf("\n%d %d %d \n",a,b,c);
	c=a++||b++;
	printf("\n %d %d %d \n",a,b,c);
	
	d=printf("hi")&&printf("bye");
	printf("\n %d",d);
}