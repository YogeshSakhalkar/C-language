#include<stdio.h>
void main()
{
	int input,i,value,j,fact=1,sum=0;
	printf("enter the number for factorial");
	printf("\nsum of series type1\n\n");
	scanf("%d",&input);
	printf("\n\n");
	for(i=1;i<=input;i++)
		{
			value=i;
			for(j=1;j<=value;j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			fact=1;
		}
	printf("The result of the following operation is: %d",sum);
}