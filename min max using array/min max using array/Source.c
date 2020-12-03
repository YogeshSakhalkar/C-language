#include<stdio.h>
void main()
{
	int arr[100];
	int i,min,max,size;
	printf("Enter the size of an array \n");
	scanf("%d",&size);
	printf("\n Enter the elements in array: \n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];

	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}

	printf("\n maximum value is\n %d",max);
	printf("\n mimnum value is \n %d", min);
}