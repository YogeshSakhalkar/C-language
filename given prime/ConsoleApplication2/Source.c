#include<stdio.h>
void main()
{
	int num=9, count=0,i;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
	}
	if(count<=2)
		printf("number is prime %d",num);
	else
		printf("number is not prime number %d",num);
}