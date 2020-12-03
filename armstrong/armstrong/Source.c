#include<stdio.h>
int armstrong(int);
void main(){
	int sum,num;
	printf("Enter the number:");
	scanf("%d",&num);
sum=armstrong(num);
if(sum==0){
	printf("its not an armstrong number");
}else
{
	printf("its an armstrong number");
}
}
int armstrong(int n)
{
	int r,sum=0,c,temp;
	temp=n;
	while(n!=0){
	r=n%10;
	c=r*r*r;
	sum=sum+c;
	n=n/10;
	}
	printf("\n%d\n\n",sum);
	if(temp!=sum){
		return 0;
	}
	else{
		return 1;
	}
}