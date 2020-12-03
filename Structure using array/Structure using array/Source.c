#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[25];
};

void StoreArrStd(struct student*,int);
void PrintArrStd(struct student*,int);
void main()
{
	struct student arr[3];
	StoreArrStd(arr,3);
	PrintArrStd(arr,3);
}

void StoreArrStd(struct student *arr,int input)
{
	int i;
	for(i=0;i<input;i++)
	{
		printf("\nEnter the roll\n");
		scanf("%d",&arr[i].roll);
		printf("\nEnter the name\n");
		scanf("%s",&arr[i].name);
	}
}

void PrintArrStd(struct student *arr,int input)
{
	int i;
	for(i=0;i<input;i++)
	{
		printf("\nEnter the roll\n %d",arr[i].roll);
	
		printf("\nEnter the name\n %s",arr[i].name);
	
	}
}
