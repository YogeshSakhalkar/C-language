#include<stdio.h>
void reverse(int*,int*,int);
int summation(int*,int);
void main()
{
	int i,input,j,result1=0;
	int array[100],result[100];
	int*ptr;
	int*ptr1;
	ptr1=result;
	ptr=array;
	printf("Enter the total number user want to enter:\n");
	scanf("%d",&input);
	printf("\n enter the element");
	for(i=0;i<input;i++)
	{
		scanf("%d",&array[i]);
	}
	reverse(result,array,input);
	printf("Output of String reverse is:");
	for(j=0;j<input;j++)
	{
		printf("%d\t",result[j]);
	}
	result1=summation(array,input);
	printf("\nThe result of summationn of array is: %d",result1);
}

void reverse(int* result,int* arr,int input)
{
	int i,j;
	j=input-1;
	for(i=0;i<input;j--)
	{
		result[j]=arr[i];
		i++;
	}
}

int summation(int* arr,int input)
{
	int i;
	int result1=0;
	for(i=0;i<input;i++)
	{
		result1=result1+arr[i];
	}
	return result1;
}