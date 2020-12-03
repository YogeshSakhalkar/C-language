#include<stdio.h>
#include<string.h>
void main()
{
	char s[10]="60548";
	char c;
	int i,digit,number=0,sum=0;
	for(i=0;i<strlen(s);i++)
	{
		c=s[i];
		if(c>='0' &&c<='9')
		{
			digit=c-'0';
			sum=sum+digit;
		}
	}
	printf("%d",sum);
}