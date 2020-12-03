#include<stdio.h>
char* rev(char*,char*);
void main()
{
	char source[10]="yogesh";
	char destination[10];
	rev(destination,source);
	printf("the reverse string is %s",destination);
	printf("\n\n\n");
}

char* rev(char* des,char* sourc)
{
	
	int count=0;
	int i=0;
	while(sourc[i]!='\0')
	{
		i++;
	}
	count=i-1;
	i=0;
	while(sourc[i]!='\0')       
	{
		des[count]=sourc[i];
		i++;
		count--;
	}
	des[i]='\0';
	return des;
}