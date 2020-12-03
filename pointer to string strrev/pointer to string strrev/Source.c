#include<stdio.h>
int strlen(char*);
void main()
{
	char str[21]="abcd";
	int result;
	result=strlen(str);
	printf("The result is %d",result);
}

int strlen(char * str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}










/*char* strrev(char*,char*);
void main()
{
	char souc[20]="abc";
	char dest[20];
	strrev(dest,souc);
	printf("%s",dest);
}

char* strrev(char* dest,char* sorc)
{
	int i=0,j=0;
	while(sorc[i]!='\0')
	{
		i++;
	}
	j=i-1;
	i=0;
	while(sorc[i]!='\0')
	{
		dest[j]=sorc[i];
		j--;
		i++;
	}
	dest[i]='\0';
	return dest;
}*/