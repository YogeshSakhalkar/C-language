#include<stdio.h>

int min_array(int*,int);
int max_array(int*,int);
float avg_array(int*,int);
int sum_array(int*,int);
void main()
{
	int i,arr[100],input,min,max,sum,j;
	float avg=0;
	int* ptr;
	ptr=arr;
	printf("Enter the total number you want to enter:");
	scanf("%d",&input);
	printf("NOW enter the number\n");
	for(j=0;j<1;j++)
	{
		for(i=0;i<input;i++)
		{
			scanf("%d",&arr[i]);
		}
	}
	min=min_array(arr,input);
	printf("The minimun value in array is: %d\n\n",min);
	max=max_array(arr,input);
	printf("The maxminum value in array is: %d\n\n",max);
	avg=avg_array(arr,input);
	printf("The maxminum value in array is: %lf\n\n",avg);
	sum=sum_array(arr,input);
	printf("The maxminum value in array is: %d\n\n",sum);
}

int min_array(int* arr,int input)
{
	int i,j,min=0;
	min=arr[0];
	for(j=0;j<1;j++)
	{
		for(i=1;i<input;i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
	}
	return min;
}

int max_array(int* arr,int input)
{
	int i,j;
	int max=0;
	for(j=0;j<1;j++)
	{
	for(i=0;i<input;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
	}
}

float avg_array(int* arr,int input)
{

	int j,i,sum=0;
	float avg=0;
	for(j=0;j<1;j++)
	{
		for(i=0;i<input;i++)
		{
			sum=sum+arr[i];
		}
	}
	avg=sum/input;
	return avg;
}

int sum_array(int* arr,int input)
{
	int j,i,sum=0;
	for(j=0;j<1;j++)
	{
		for(i=0;i<input;i++)
		{
			sum=sum+arr[i];
		}
	}
	return sum;
}