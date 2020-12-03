#include<stdio.h>
void main(){
	int a=10;
	int b=20;
	int*p11;
	int*p22;
	p11=&a;
	p22=&b;
	printf(" before %d",a);
	printf("\n before %d\n\n",b);
	*p11=44;
	*p22=66;
	printf("\n*p11=44; *p22=66;");
	printf("\n after %d",a);
	printf("\n after %d",b);


	p11=p22;
	printf("\n\n\n p11=p22;");
	printf("\n after %d",a);
	printf("\n after %d",b);
	
	*p11=77;
	printf("\n\n\n *p11=77;");
	printf("\n after %d",a);
	printf("\n after %d",b);
	
	a=*p22;
	printf("\n\n a=*p22");
	printf("\n after %d",a);
	printf("\n after %d",b);
	}



void main1(){
	int a=10;
	int* ptr;
	int b=20;
	printf("Before %d\n",a);
	printf("Before %d\n",b);
	ptr=&a;
	*ptr=40;
	printf("Afrter %d\n",a);
	printf("After %d\n",b);

}