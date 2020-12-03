#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[25];
};
struct student storemyfun(struct student);
void main()
{
	struct student s1;
	s1=storemyfun(s1);
	printf("%d",s1.roll);
	printf("\t%s\n",s1.name);
}

struct student storemyfun(struct student s1)
{
	s1.roll=10;
	strcpy(s1.name,"sachin");
	return s1;
}




















/*struct student
{
	int roll;
	char name[20];
};

void main()
{
	struct student s1;
	s1.roll=10;
	strcpy(s1.name,"yoesh");
	printf("The roll no is %d",s1.roll);
	printf("\nThe name is %s",s1.name);
}*/