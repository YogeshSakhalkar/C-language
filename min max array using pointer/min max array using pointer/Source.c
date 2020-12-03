#include<stdio.h>
void minmax(int*,int);
void main()
{
	int arr[5]={20,19,2,123,89};
	minmax(arr,5);
}

void minmax(int* arr,int size)
{
	int min=0,max=0,i;
	min=arr[0];
	max=arr[0];
	for(i=0;i<4;i++)
	{
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	printf("the maximum number in an array is %d",max);
	printf("\n\n\n");
	printf("the minimum number in an array is %d",min);
}