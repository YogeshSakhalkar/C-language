#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[30];
	float salary;
};
struct employee store_employee(struct employee);
void main()
{
	struct employee emp1;
	emp1=store_employee(emp1);
	printf("\nThe ID is : %d\n",emp1.id);
	printf("The Name is : %s\n",emp1.name);
	printf("The Salary is : %f\n",emp1.salary);
	printf("\n\n\n");
}

struct employee store_employee(struct employee emp1)
{
	printf("Enter the ID:\n");
	scanf("%d",&emp1.id);
	printf("Enter the Name:\n");
	scanf("%s",&emp1.name);
	printf("Enter the Salary:\n");
	scanf("%f",&emp1.salary);
	return emp1;
}