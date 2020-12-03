#include<stdio.h>


void sumofdig();


void main()
{
	sumofdig();
}

void sumofdig()
{
	int num=0,sum=0,rem,rev=0,t;
	printf("\n enter the number");
	scanf("%d",&num);
	t=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("the sum of digits is %d\n",sum);

	while(t!=0)
	{
		rev=rev*10;
		rev=rev+t%10;
		t=t/10;
	}
	printf("the reverse of number is %d\n",rev);
}