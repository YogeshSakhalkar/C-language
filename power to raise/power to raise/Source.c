#include<stdio.h>
void main()
	{
		int num,raise,num1=1,i;
		printf("Enter the number :");
		scanf("%d",&num);
		printf("Enter the power :");
		scanf("%d",&raise);
		for(i=1;i<=raise;i++)
		{
			num1=num*num1;
		}
		printf("The result are :%d",num1);
		printf("\n\n\n");
	}