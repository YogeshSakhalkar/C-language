#include<stdio.h>
int lenght(char*,int);
void main()
{
	char arr[5]="xyz";
	int count=0;
	count=lenght(arr,5);
		printf("the lenght of string is %d",count);
		printf("\n\n\n");
}

int lenght(char* arr,int size)
{
	int i,count=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]=='\0')
			break;
		count++;
	}
	return count;
}