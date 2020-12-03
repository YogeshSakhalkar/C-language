#include<stdio.h>
//pass by address
void myfun(int*);
void main2(){
int a=10;
int* ptr;
ptr=&a;
myfun(&a);
printf("%d",a);
}

void myfun(int *x){
*x=340;
}















//pass by value
void myfi(int *);
void main1(){
int a=10;
int* ptr;
int* pt;
	ptr=&a;
myfi(ptr);
printf("%d",a);
}

void myfi(int *x)
{
	*x=360;
}