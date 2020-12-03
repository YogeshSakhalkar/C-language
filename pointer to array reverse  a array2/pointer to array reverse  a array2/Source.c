#include<stdio.h>
void reverse(int*,int);
void main(){
int i,input,a[100];
int* p;
p=a;
printf("\nEnter the total number you want to insert:");
scanf("%d",&input);
printf("Enter the input");
for (i = 0;i<input;i++)
{
	scanf_s("%d",&a[i]);
}
printf("\nThe input array is:");
for (i = 0;i<input;i++)
{
	printf("%d\t",a[i]);
}
reverse(p,input);
}

void reverse(int *ptr,int input){
int i=0,j;
int b[10];
printf("\nThe reversing order is:");
for(j=input-1;i<input;j--){
	b[j]=*(ptr+i);
	i++;
}
printf("\n");
for(j=0;j<input;j++){
	printf("%d",b[j]);
}
printf("\n\n\n");
}