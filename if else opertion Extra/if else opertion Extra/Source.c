#include<stdio.h>
//prime number with 
void main()
{
	int input,n,i=0,j,flag=0;
	printf("Enter the input");
	scanf("%d",&input);
	n=input;
	while (n!=0)
	{
		n=n/10;
		i++;
	}
	if(i==2)
	{
		for(j=2;j<=input/2;i++)
		{
			if(n%2==0)
			{
				flag==1;
				break;
			}
		}
		if(flag==1)
		{
			printf("\n It is not a prime number");
		}
		else
		{
			printf("\n It is a prime number");
		}
	}
	else
	{
		printf("\nIt is not 2 digit number");
	}

	printf("\n\n\n");
}
























//division
void main11()
{
	float a,b,c=0;
	printf("Enter the First number");
	scanf("%f",&a);
	printf("Enter the First number");
	scanf("%f",&b);
	if(b==0)
	{
	printf("Cannot be divisible");
	}
	else
	{
		c=a/b;
		printf("the result of division is: %f",c);
	}
	printf("\n\n\n");
}
