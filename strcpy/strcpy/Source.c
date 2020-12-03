#include<stdio.h>
void copy(char*,char*);
void main()
{
	char source[10]="yogesh";
	char destination[10];
	copy(destination,source);
	printf("the	 destination string is %s",destination);
	printf("\n\n\n");
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