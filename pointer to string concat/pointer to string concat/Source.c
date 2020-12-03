#include<stdio.h>
char* strcpy(char*,char*);
void main(){
	char str1[23]="sachin";
	char str2[12]="tendulkar";
	strcpy(str1,str2);
	printf("The result is ::%s",str1);
}

char* strcpy(char* str1,char* str2){
	int i=0,j=0;
	while (str1[i]!='\0')
	{
		i++;
	}
	while (str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return str1;
}