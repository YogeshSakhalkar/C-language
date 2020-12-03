#include<stdio.h>
#include<string.h>
struct time
{
	int hrs;
	int min;
	int sec;
};
struct time storemydate (struct time);
void main()
{
	struct time d1;
	printf("you can enter in 24 hrs format\n\n");
	d1=storemydate(d1);
	if(d1.hrs>24)
		{
			printf("\n\nYou have invalid hrs\n\n");
			d1=storemydate(d1);
		}
	if(d1.min>60)
		{
			printf("\n\nYou have invalid mins\n\n");
			d1=storemydate(d1);
		}	
	if(d1.sec>60)
		{
			printf("\n\nYou have invalid sec\n\n");
			d1=storemydate(d1);
		}else
	printf("The time is %d:%d:%d",d1.hrs,d1.min,d1.sec);
}

struct time storemydate (struct time d)
{
	printf("\nEnter hours:");
	scanf("%d",&d.hrs);
	printf("\nEnter min:");
	scanf("%d",&d.min);
	printf("\nEnter sec:");
	scanf("%d",&d.sec);
	return d;
}