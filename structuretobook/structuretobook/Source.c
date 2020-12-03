#include<stdio.h>
#include<string.h>
typedef struct book
{
	int id;
	char bname[20];
	char author[20];
	int price;
}boook;

void store_name(boook *,int);
void print_name(boook *,int);

void main()
{
	boook b[2];
	store_name(b,2);
	print_name(b,2);
}

void store_name(boook *b, int input)
{
	int i;
	for(i=0;i<input;i++)
	{
		printf("\nenter the book id : \n");
		scanf_s("%d",&b[i].id);
		printf("\nenter the book name : \n");
		scanf("%s",&b[i].bname);
		printf("\nenter the author name : \n");
		scanf("%s",&b[i].author);
		printf("\nenter the book price : \n");
		scanf_s("%d",&b[i].price);
	}
	printf("\n\n\n");
}

void print_name(boook *b,int input)
{
	int i;
	for(i=0;i<input;i++)
	{
		printf("The name of book is :%s\n",b[i].bname);
		printf("The book id is :%d\n",b[i].id);
		printf("The author name is :%s\n",b[i].author);
		printf("The book price is :%d\n",b[i].price);
		printf("\n\n");
	}
}