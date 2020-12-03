#include<stdio.h>
void main()
{
	int product,discount,c;
	float a,b,d,original;
	
		printf("enter the price of the product \n");
		scanf_s("%d",&product);
		
		printf("\nenter the discount \n");
		scanf_s("%d",&discount);
		
		a=discount/100;
		printf("%f\n",a);
		
		b=discount-a;
		printf("%f\n",b);
		
		c=b;
		printf("%f\n",c);
		
		d=b-c;
		printf("%f\n",d);
		
		original=product/d;
		printf("\n the price of orininal product is \n %d",original);
}
