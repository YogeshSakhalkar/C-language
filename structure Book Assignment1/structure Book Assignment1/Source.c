#include<stdio.h>
struct Book
{
	int Bname_id;
	char author[25];
	float price;
};
struct Book Store_Book_Details(struct Book);
void main()
{
	struct Book Book1;
	Book1=Store_Book_Details(Book1);
	printf("\nThe Book_id is: %d",Book1.Bname_id);
	printf("\nThe Book_id is: %s",Book1.author);
	printf("\nThe Book_id is: %f",Book1.price);
	printf("\n\n\n");
}

struct Book Store_Book_Details(struct Book B1)
{
	printf("\nEnter the Book id:\n");
		scanf("%d",&B1.Bname_id);
	printf("\n Enter the Author:\n");
		scanf("%s",&B1.author);
	printf("Enter the price");
		scanf("%f",&B1.price);
	return B1;
}