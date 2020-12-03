#include<stdio.h>
void main()
{
	int i,x=1;
	char str[100];
	printf("Enter the string:\n");
	scanf("%s",str);
	while(x<3){
	printf("enter the number for following operation \n 1:-Encrypt the String \n 2:-Decrypt the String \n3:-Exit\n\n");
	scanf("%d",&x);
	switch (x)
	{
	case 1:for(i=0;(i<100 && str[i]!='\0');i++)
		   {
				str[i]=str[i]+3;
		   }
		   printf("\nEncrypted String is: %s",str);
		   break;
	case 2:for(i=0;(i<100 && str[i]!='\0');i++)
		   {
				str[i]=str[i]-3;
		   }
		   printf("\nDecrpyted String is: %s",str);
		   break;
	default:printf("invalid entry");
		break;
	}
	printf("\n\n\n");
	}
}