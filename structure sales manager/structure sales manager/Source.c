#include<stdio.h>
#include<string.h>
struct sales_manager
{
	int id;
	char name[27];
	float salary;
	float incentive;
	int target;
};
struct sales_manager sale_manager(struct sales_manager);
void main()
{
	struct sales_manager sm1;
	sm1=sale_manager(sm1);
	printf("\nThe ID is %d\n",sm1.id);
	printf("\nThe Name is %s\n",sm1.name);
	printf("\nThe Salary is %f\n",sm1.salary);
}

struct sales_manager sale_manager(struct sales_manager sm1)
{
	int input;
	printf("\nenter the ID : \n");
	scanf("%d",&sm1.id);
	printf("\nenter the Name : \n");
	scanf("%s",&sm1.name);
	printf("\nenter the Salary : \n");
	scanf("%f",&sm1.salary);
	printf("\nTraget achived 1:-Yes 2:-No : ");
	scanf("%d",&input);
	switch (input)
	{
	case 1:printf("Enter the incensive");
		scanf("%f",&sm1.incentive);
		sm1.salary=sm1.salary+sm1.incentive;
		break;
	case 2:break;
	default:printf("Invaild Entry");
		break;
	}
	return sm1;
}