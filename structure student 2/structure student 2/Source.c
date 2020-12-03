#include<stdio.h>
#include<string.h>
struct stud_date
{
	int day;
	int month;
	int year;
	char name[20];
};

void main()
{

	struct stud_date d1;
	struct stud_date d2;
	strcpy(d1.name="yogesh");

	printf("%s",d1.name);
	printf("enter the first date\n");
	scanf("%d",&d1.day);
	scanf("%d",&d1.month);
	scanf("%d",&d1.year);
	
	printf("\n enter the second date\n");
	scanf("%d",&d2.day);
	scanf("%d",&d2.month);
	scanf("%d",&d2.year);

	printf("%d/%d/%d",d1.day,d1.month,d1.year);
	
	printf("\n%d/%d/%d\n",d2.day,d2.month,d2.year);

}
