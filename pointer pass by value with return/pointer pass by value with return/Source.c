#include<stdio.h>
int* myfun1(int);
void main(){
int a=10;
int* p2;
int* ptr;
ptr=&a;
p2=myfun1(&a);
printf("\nThe value of p2 is :: %u",p2);
printf("\nThe value of ptr is : %u",ptr);
printf("\nThe address of a is : %u",&a);
printf("\n\n\n");
}

int* myfun1(int *ptr){
*ptr=390;
printf("\nThe value of ptr inside function is :: %u",ptr);
return ptr;
}




















int* myfun(int);
void main1(){
int a=10;
int* p2;
int* ptr;
ptr=&a;
p2=myfun(ptr);
printf("%d",*p2);
}

int* myfun(int* x){
*x=310;
return x;
}