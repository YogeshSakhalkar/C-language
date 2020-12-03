#include<stdio.h>
void main()
{
	int prime=0,i,num,count;
	printf("\n enter the number");
	scanf_s("%d",&prime);
	
	for(num=2;num<=prime;num++)
	{
		count=0;
			i=1;
		while(i<=num)
		{
			
			if(num%i==0)
			
				count++;
			
			i++;
		}
		
		if(count<=2)
		
			printf("number is prime=%d\n",num);
		
	}
}