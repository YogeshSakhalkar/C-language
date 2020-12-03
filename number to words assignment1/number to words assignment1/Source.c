#include<stdio.h>
void main(){
	int i,a[100],total;
	printf("Enter the total number you want to input");
	scanf("%d",&total);
	printf("Enter the number");
	for(i=0;i<total;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<total;i++){
	if(i==1)
		printf("ty");
	
	if(i==3)
		printf("hundred");

	if(i==4)
		printf("thousand");
	
	if(a[i]==1)
		printf("one");
	
	if(a[i]==2)
		printf("two");

	if(a[i]==3)
		printf("three");

	if(a[i]==4)
		printf("four");

	if(a[i]==5)
		printf("five");
	
	if(a[i]==6)
		printf("six");
	
	if(a[i]==7)
		printf("seven");
	
	if(a[i]==8)
		printf("eight");
	
	if(a[i]==9)
		printf("nine");
	
	if(a[i]==0)
		printf("zero");
	

	}
}