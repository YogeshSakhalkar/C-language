#include<stdio.h>
int strcmp(char*,char*);
void main()
{
	char str1[10]="abcd";
	char str2[10]="abc";
	int result;
	result=strcmp(str1,str2);
	if(result==-1)
	{
		printf("Both string are not same");
	}
	else
	{
		printf("Both String are same");
	}
	printf("\n\n\n");
}

int strcmp(char* str1,char* str2)
{
	int i=0,j=0,flag=0;
	while(str1[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			flag=-1;
			return flag;
		}
		i++;
	}
		while(str2[i]!='\0')
	{
		if(str2[i]!=str1[i])
		{
			flag=-1;
			return flag;
		}
		i++;
	}
	return flag;
}