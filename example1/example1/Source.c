#include<stdio.h>
void main()
{
	int rollNo[5];
	char name1[10],name2[10],name3[10],name4[10],name5[10];
	printf("Rank 5 \n enter the rollno: \n");
	scanf("%d",&rollNo[4]);
	printf("\n enter the name: \n");
	scanf("%s",&name5);

	printf("Rank 4 \n enter the rollno: \n");
	scanf("%d",&rollNo[3]);
	printf("\n enter the name: \n");
	scanf("%s",&name4);

	printf("Rank 3 \n enter the rollno: \n");
	scanf("%d",&rollNo[2]);
	printf("\n enter the name: \n");
	scanf("%s",&name3);

	printf("Rank 2 \n enter the rollno: \n");
	scanf("%d",&rollNo[1]);
	printf("\n enter the name: \n");
	scanf("%s",&name2);

	printf("Rank 1 \n enter the rollno: \n");
	scanf("%d",&rollNo[0]);
	printf("\n enter the name: \n");
	scanf("%s",&name1);

	printf("\n the rank 1 \nRollno is %d \nName is: %s",rollNo[0],name1);
	printf("\n the rank 2 \nRollno is %d \nName is: %s",rollNo[1],name2);
	printf("\n the rank 3 \nRollno is %d \nName is: %s",rollNo[2],name3);
	printf("\n the rank 4 \nRollno is %d \nName is: %s",rollNo[3],name4);
	printf("\n the rank 5 \nRollno is %d \nName is: %s",rollNo[4],name5);

}