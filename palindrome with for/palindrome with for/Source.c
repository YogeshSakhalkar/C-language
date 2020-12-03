#include<stdio.h>
void main()
{
	int num,sample,remainder,reverseD=0;
		printf("Enter the number");
		scanf("%d",&num);
		sample=num;
		while(num!=0)
		{
			remainder=num%10;
			printf("\nremainder %d",remainder);
			reverseD=reverseD*10+remainder;
			printf("\nreverse %d",reverseD);
			num=num/10;
			printf("\n num %d",num);
			printf("\n\n");
		}
}