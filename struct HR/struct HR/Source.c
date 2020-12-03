#include<stdio.h>
#include<string.h>
struct HR
{
	int id;
	char name[25];
	int salary;
	int commission;
};
struct HR storeHR(struct HR h1);
void main()
{
	struct HR h1;
	h1=storeHR(h1);
	printf("Id is:\n %d\n",h1.id);
	printf("Name is:\n %s\n",h1.name);
	printf("Enter the salary:\n%d\n",h1.salary);
}

struct HR storeHR(struct HR h)
{
	int i;
	printf("Enter the id:\n");
	scanf("%d",&h.id);
	printf("Enter the name:\n");
	scanf("%s",&h.name);
	printf("Enter the salary:\n");
	scanf("%d",&h.salary);
	printf("commison\n yes-1 \n no-2\n");
	scanf("%d",&i);
	switch (i)
	{
	case 1:printf("Enter the commision:\n");
		scanf("%d",&h.commission);
		h.salary=h.salary+h.commission;
		break;
	case 2:break;
	default:printf("invalid entry");
		break;
	}
	return h;
}