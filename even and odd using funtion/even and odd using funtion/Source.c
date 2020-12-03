#include<stdio.h>

void myfun();

void main()
{
	myfun();
}
	
	void myfun()
	{
	int arr[20];
	int a,i,count=0,count1=0;
	printf("enter the total number you want to enter \n");
	scanf_s("%d",&a);
	printf("\n enter the elements");
	for(i=0;i<a;i++)
	{
		scanf_s("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
	if(arr[i]%2==0)
	{
		count++;
	} else
	{
		count1++;
	}
	}
	printf("\n the number is odd %d ",count);
	printf("\n the number is even %d ",count1);
	}