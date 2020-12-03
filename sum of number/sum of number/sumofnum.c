#include<stdio.h>
void main()
{
	int num,r1,r2,q1,q2,ans;
	printf("enter the number \n");
	scanf("%d",&num);
	r1=num%100;
	q1=num/100;
	r2=r1%10;
	q2=r1/10;
	//printf("\n %d",r1);
	printf("\n %d",q1);
	printf("\n %d",r2);
	printf("\n %d",q2);
	ans=q1+r2+q2;
	printf("\n the sum %d",ans);
}
