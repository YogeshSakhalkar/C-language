#include<stdio.h>
void main()
{
	int num,r1,r2,q1,q2,ans,remainder,rev=0;
	printf("enter the number \n");
	scanf("%d",&num);
		r1=num%100;
		q1=num/100;
		r2=r1%10;
		q2=r1/10;
		ans=q1+r2+q2;
		printf("\n the sum %d",ans);
	while(num!=0)
	{

		remainder=num%10;
		rev=rev*10+remainder;
		num=num/10;
	}
	printf("\n reversed number = %d",rev);

}