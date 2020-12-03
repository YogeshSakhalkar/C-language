#include<stdio.h>
void main()
{
	int price=0,discount=0,a=0;
	float dis;
		printf("enter the price from the user \n");
		scanf_s("%d",&price);
		printf(" \nIf the user is student \n1:-Yes \n2:-No \n");
		scanf_s("%d",&a);
		if(a==1)
		{
			if(price>500)
			{
				discount=price*20/100;
				dis=price-discount;
				printf("\n after discount apply the price is \n %f",dis);
			}
			else if(price<500)
			{
					discount=price*10/100;
					dis=price-discount;
					printf("\n after discount apply the price is \n %f",dis);
			}	
		}
				if(a==2)
		{
			if(price>600)
			{
					discount=price*15/100;
					dis=price-discount;
				printf("\n after discount apply the price is \n %f",dis);
			}	
				if(price<600)
					printf("\n there is no discount %d\n",price);
		}
		
		
}




