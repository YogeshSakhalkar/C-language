#include<stdio.h>
char* concat(char*,char*);
void main()
{
	char arr[30]="yogesh";
	char brr[30]="sakhalkar";
	concat(arr,brr);
	printf("the resulting string is %s",arr);
	printf("\n\n\n");
}

char* concat(char* source1, char* source2)
{
	int count=0,i=0;
	while(source1[count]!='\0')
	{
		count++;
	}
	while(source2[i]!='\0')
	{
		source1[count]=source2[i];
		i++;
		count++;
	}
	source1[count]='\0';
	return source1;
}