#include<stdio.h>
int Two_wheelers(int);
int Three_wheelers(int);
int	Four_wheelers(int);
int Heavy_veihiles(int);
void main()
{
	int input,result;
	int total_number;
	char abc;
	printf("Toll calculation \n Enter the veihicles type \n1:-Two wheelers \n2:-Three Wheelers \n3:-Four Wheeler \n4:-Heavy veihiles\n ");
	scanf("%d",&input);
	switch (input)
	{
	case 1:	printf("how many people are there :");
			scanf("%d",&total_number);
			result=Two_wheelers(total_number);
			printf("The total toll is ::%d",result);
		break;

	case 2:printf("how many people are there :");
			scanf("%d",&total_number);
			result=Three_wheelers(total_number);
			printf("The total toll is ::%d",result);
		break;

	case 3:printf("how many people are there :");
			scanf("%d",&total_number);
			result=Four_wheelers(total_number);
			printf("The total toll is ::%d",result);
		break;

	case 4:printf("how many people are there :");
			scanf("%d",&total_number);
			result=Heavy_veihiles(total_number);
			printf("The total toll is ::%d",result);
		break;
	default:printf("Invalid Input");
		break;
	}
	printf("\n\n\n");
}

int Two_wheelers(int total_number)
{
	int Two_wheelers=20,i,add=0,result,total=0;
	if(total_number>2)
	{
		total=total_number-2;
	}
	for(i=1;i<=total;i++)
	{
		add=add+10;
	}
	result=Two_wheelers+add;
	return result;
}

int Three_wheelers(int total_number)
{
	int Three_wheelers=30,i,add=0,result,total=0;
	if(total_number>3)
	{
		total=total_number-3;
	}
	for(i=1;i<=total;i++)
	{
		add=add+20;
	}
	result=Three_wheelers+add;
	return result;
}

int Four_wheelers(int total_number)
{
	int Four_wheelers=40,i,add=0,result,total=0;
	if(total_number>4)
	{
		total=total_number-4;
	}
	for(i=1;i<=total;i++)
	{
		add=add+40;
	}
	result=Four_wheelers+add;
	return result;
}

int Heavy_veihiles(int total_number)
{
	int Heavy_veihiles=60,i,add=0,result,total=0;
	if(total_number>6)
	{
		total=total_number-6;
	}
	for(i=1;i<=total;i++)
	{
		add=add+100;
	}
	result=Heavy_veihiles+add;
	return result;
}