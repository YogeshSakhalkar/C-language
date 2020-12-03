#include<stdio.h>
int power(int,int);
void main(){
	int num,pow,result;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the power");
	scanf("%d",&pow);
	result=power(num,pow);
	printf("The result is %d",result);
}
 int power(int n,int p){
	int sum=1,i;
	for(i=1;i<=p;i++){
	sum=sum*n;
	}
	return sum;
 }