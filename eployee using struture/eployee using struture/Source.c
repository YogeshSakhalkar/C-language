#include<stdio.h>
#include<string.h>
struct student
{
int rollno;
char name[20];
};


void main()
{
	struct student s1;
	s1.rollno=10;
	strcpy(s1.name,"prasant");

	printf("%d",s1.rollno);
	printf("%s",s1.name);
}
