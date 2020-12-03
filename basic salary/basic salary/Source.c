#include<stdio.h>
void main()
{
	int da,ta,hra,basic, a=10,b=20,c=30,salary;
	printf("enter the your salary\n");
	scanf_s("%d",&basic);
	if(basic<=5000)
			(da=(10*basic)/100) && (ta=(20 *basic)/100) && (hra=(25*basic)/100);
	else
		(da=(15*basic)/100) && (ta=(25*basic)/100) && (hra=(30*basic)/100);
	
	salary=da+ta+hra+basic;
	printf("you salary is %d",salary);
}
