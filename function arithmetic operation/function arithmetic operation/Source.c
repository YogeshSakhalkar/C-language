#include<stdio.h>

	int add();
	int sub();
	int mul();


void main()
{
	int opr,a,b;
	printf("enter the operation \n 1:addition \n 2:subraction \n 3:multipliation \n");
	scanf("%d",&opr);
	printf("\n enter the two number \n");
	scanf("%d %d",&a,&b);

	if(opr==1){
	int res=add(a,b);
	printf("\nthe addition of two number is %d",res);
	}

	if(opr==2){
		int res=sub(a,b);
	printf("\nthe addition of two number is %d",res);
	}

	if(opr==3){
		int res2=mul(a,b);
		printf("\nthe addition of two number is %d",res2);
	}

}

int add(int p,int q)
{
	int c;
	c=p+q;
	return c;
}

int sub(int p,int q)
{
	int c;
	c=p-q;
	return c;
}

int mul(int p,int q)
{
	int c;
	c=p*q;
	return c;
}