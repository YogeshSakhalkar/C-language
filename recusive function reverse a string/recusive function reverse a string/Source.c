#include<stdio.h>
char* reverse_a_string(char*,char*);
void main()
{
	char a[10]="xyz";
	char b[10];
	reverse_a_string(b,a);
	printf("\n\nThe Destination string is %s",b);
	printf("\n\n");
}
char* reverse_a_string(char *des,char* soc)
{
	int i,count=0;
	while(soc[i]!='\0')
	{
		count++;
	}
	count=count-1;
	printf("\n\nthe count is %d",count);
	while(soc[i]!='\0')
	{
		if(soc[count]!='\0')
		{
			des[count]=soc[i];
			--i;
		}
	}
	des[count]='\0';
	return des;
}
