#include<stdio.h>
int sum_of_digits(int);
int reverse_the_number(int);
void number_in_words(int);
void main()
{
	int input=2,result=0,value;

	while(input<3)
	{
	printf("Enter the operation that you want to conduct \n1:sum of digit \n2:Reverse the number \n3:Print in words\n4:Exit");
	scanf("%d",&input);
	switch (input)
	{
	case 1:	printf("\nEnter the number:  ");
			scanf("%d",&value);
			result=sum_of_digits(value);
			printf("\n The result of sum of digit is:%d\n\n",result);
		break;
	case 2:	printf("\nEnter the number to reverse :  ");
			scanf("%d",&value);
			result=reverse_the_number(value);
			printf("The result of reverse of number is:%d\n\n",result);
		break;
	case 3:printf("\nEnter the number to find in words:  ");
			scanf("%d",&value);
			number_in_words(value);
		break;
	default:printf("Exit");
		break;
	}}
	
}

int sum_of_digits(int value)
{
	int remainder;
	int sum=0;
	while(value!=0)
	{
		remainder=value%10;
		sum=sum+remainder;
		value=value/10;
	}
	return sum;
}

int reverse_the_number(int value)
{
	int input,rev=0,remainder;
	input=value;
	while(input!=0)
	{
		remainder=input%10;
		rev=rev*10+remainder;
		input=input/10;
	}
	return rev;
}

void number_in_words(int value)
{
	int input,rev=0,remainder,n;
	input=value;
	while(input!=0)
	{
		remainder=input%10;
		rev=rev*10+remainder;
		input=input/10;
	}
	
	while(rev!=0)
	{
		switch(rev%10)
		{
		case 0:printf(" Zero");
			rev=rev/10;
			break;
		case 1:printf(" One");
			rev=rev/10;
			break;
		case 2:printf(" Two");
			rev=rev/10;
			break;
		case 3:printf(" Three");
			rev=rev/10;
			break;
		case 4:printf(" Four");
			rev=rev/10;
			break;
		case 5:printf(" Five");
			rev=rev/10;
			break;
		case 6:printf(" six");
			rev=rev/10;
			break;
		case 7:printf(" Seven");
			rev=rev/10;
			break;
		case 8:printf(" Eight");
			rev=rev/10;
			break;
		case 9:printf("Nine");
			rev=rev/10;
			break;
		default:printf("invalid entry");
			break;
	}
}
	printf("\n\n\n");
}