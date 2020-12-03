#include<stdio.h>
void main()
{
	float far=0,cel=0,input;
	char input1;
	printf("Enter the input C or F\n");
	scanf("%c",&input1);
	printf("Enter the temp");
	scanf("%f",&input);
	if(input1=='C'||'c')
	{
		cel=5.0/9.0*(input-32);
		printf("\n the Cel is %d\n\n",cel);
	}else if(input1=='F'||'f')
	{
		far=9.0/5.0*(input+32);
		printf("\n the far is %d \n\n",far);
	}else 
		printf("Invaild");
}
