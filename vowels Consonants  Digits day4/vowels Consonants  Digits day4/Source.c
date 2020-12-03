#include<stdio.h>
void main()
{
	char str[50];
	int i,vowels=0,constant=0;
	printf("Enter the String:");
	scanf("%s",str);

	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' &&str[i]<='z')||(str[i]>='A' &&str[i]<='Z'))
		{
			switch (str[i])
			{
			case'a':
			case'e':
			case'i':
			case'o':
			case'u':
			case'A':
			case'E':
			case'I':
			case'O':
			case'U':
				vowels++;
				break;
			default:
				constant++;
			}
		}
	}
	printf("\n Vowels=%d",vowels);
	printf("\n constant=%d",constant);
}
