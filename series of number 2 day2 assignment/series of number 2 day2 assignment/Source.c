#include<stdio.h>
void main()
{
	int input,i,value,j,mul=1,sum=0;
	printf("enter the number ");
	printf("\nsum of series type2\n\n");
	scanf("%d",&input);
	printf("\n\n");
	for(i=1;i<=input;i++)
		{
			value=i;
			for(j=1;j<=value;j++)
			{
				mul=mul*value;
			}
			sum=sum+mul;
			mul=1;
		}
	printf("The result of the following operation is: %d",sum);
}