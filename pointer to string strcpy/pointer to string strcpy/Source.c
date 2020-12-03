#include<stdio.h>
void copy(char*,char*);
void main()
{
	char sour[10]="abc";
	char dest[10];
	copy(dest,sour);
	printf("%s",dest);
}

void copy(char* dest,char* source)
{
	int i=0;
	while(source[i]!='\0'){
		dest[i]=source[i];
		i++;
	}
	dest[i]='\0';
}