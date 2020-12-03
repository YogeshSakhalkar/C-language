#include<stdio.h>
void prime(int*,int);
void main()
{
	int i,arr[100],input;
	int* ptr;
	ptr=arr;
	printf("Enter the total number in array");
	scanf_s("%d",&input);
	printf("Enter the elements:\n");
	for(i=0;i<input;i++)
	{
		scanf_s("%d",&arr[i]);
	}
	prime(arr,input);
}

void prime(int* arr,int input)
{
	int i,n=0,j,flag=0;
	for(i=0;i<input;i++)
	{
		n=arr[i];
		for(j=2;j<=n/2;j++)
		{
			if(n%2==0)
			{
				flag=1;
				break;
			}
		}
		if(n==1)
		{
			printf("1 is neither prime number of composite \n");
		}
		else
		{
			if(flag==0)
			{
				printf("%d is a prime numeber \n",arr[i]);
			}
			else
			{
				printf("%d is not a prime number \n",arr[i]);
			}
	}
	}
}