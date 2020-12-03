#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct date storedate(struct date);
void main()
{
	struct date date1;
	date1=storedate(date1);
	printf("The date is %d\t%d\t%d",date1.day,date1.month,date1.year);
}

struct date storedate(struct date d1)
{
	printf("Enter the day in number");
	scanf("%d",&d1.day);
	printf("Enter the month in number");
	scanf("%d",&d1.month);
	printf("Enter the year in number");
	scanf("%d",&d1.year);
	return d1;
}