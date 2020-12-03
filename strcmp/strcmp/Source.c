#include<stdio.h>
int compare(char*,char*);
void main()
{
	char arr[10]="yogeshas";
	char brr[10]="yogesh";
	int count;
	count=compare(arr,brr);
	if(count==0)
	{
		printf("both string is same");
	}
	else
	{
		printf("both string is not same");
	}
	printf("\n\n\n");
}

int compare(char* arr,char* brr)
{
	int i=0;
	int count=0;
	while(arr[i]!='\0')
	{
		if(arr[i]==brr[i])
		{
			i++;
		}
		else
		{
			count=+1;
			break;
		}
	}
	return count;
}