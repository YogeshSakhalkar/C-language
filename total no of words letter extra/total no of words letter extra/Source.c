#include<stdio.h>
#include<string.h>
void main()
{
	char s[30];
	int count=0,i;
	printf("Enter the string \n");
	scanf("%s",s);
	for(i=0; s[i]!='\0 ';i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			count++;
	}
	printf("Total number of words are %d",count);
}