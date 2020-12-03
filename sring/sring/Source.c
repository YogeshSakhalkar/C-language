#include<stdio.h>
void copy(char*,char*);
void main()
{
	char str1[10]="abc";
	char str2[10];
	copy(str2,str1);
	printf("The concat string is %s",str2);
}

void copy(char* des,char* sorc)
{
	int i=0;
	while(sorc[i]!='\0')
	{
		des[i]=sorc[i];
		i++;
	}
	des[i]='\0';
}














/*#include<stdio.h>
int count(char*,int);
void main()
{
	char str1[10]="yogesh";
	int i=0;
	i=count(str1,10);
	printf("\nThe count is %d\n",i);
}

int count(char* str1,int input)
{
	int i;
	for(i=0;i<input;i++)
	{
		if(str1[i]=='\0')
			break;
	}
	return i;
}*/

/*#include<stdio.h>
char* concat(char*,char*);
void main()
{
	char str1[20]="yog";
	char str2[20]="esh";
	concat(str1,str2);
	printf("\n\n The concat string is %s",str1);
}

char* concat(char* str1,char* str2)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	j=i;
	i=0;
	while(str2[i]!='\0')
	{
		str1[j]=str2[i];
		i++;
		j++;
	}
	str1[j]='\0';
	return str1;
}*/

