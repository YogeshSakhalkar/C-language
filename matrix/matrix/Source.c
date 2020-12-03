#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],sum[100][100],row=0,coloumn=0;


		printf("enter the element in first matrix \n");
	for(row=0;row<3;row++)
	{
		for(coloumn=0;coloumn<3;coloumn++)
		{
			scanf("%d",&a[coloumn][row]);
		}
	}


		printf("enter the element in second matrix \n");
	for(row=0;row<3;row++)
	{
		for(coloumn=0;coloumn<3;coloumn++)
		{
			scanf("%d",&b[coloumn][row]);
		}
	}


		for(row=0;row<3;row++)
	{

		for(coloumn=0;coloumn<3;coloumn++)
		{
			sum[coloumn][row]=a[coloumn][row]+b[coloumn][row];
		}		
	}

		printf("/n/n/n");
	for(row=0;row<3;row++)
	{
		printf("/n");
		for(coloumn=0;coloumn<3;coloumn++)
		{
			printf("%d\t",sum[coloumn][row]);
		}
	}
	printf("/n");
}
