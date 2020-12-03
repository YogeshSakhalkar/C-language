#include<stdio.h>
void main()
{
	int input1,input2,input3,max;
	float result;
	printf("Enter the first number:");
	scanf("%d",&input1);
	printf("\nEnter the second number:");
	scanf("%d",&input2);
	printf("\nEnter the Third number:");
	scanf("%d",&input3);
	max=input1>input2?(input1>input3?input1:input3):(input2<input3?input3:input2);
	printf("\nThe Greatest of 3 number are: %d",max);
	
	if(max!=input1){
		if(max%input1==0){
			printf("\n %d is divisble by %d",max,input1);
		}
	}
	if(max!=input2){
		if(max%input2==0){
			printf("\n %d is divisble by %d",max,input2);
		}
	}
	if(max!=input3){
	if(max%input3==0){
		printf("\n %d is divisble by %d",max,input3);
	}
	}else
		printf("\n %d is divisible non of the number",max);
	printf("\n\n\n");
}