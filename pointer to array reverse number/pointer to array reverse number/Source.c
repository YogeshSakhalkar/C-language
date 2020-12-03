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
int i=0;
printf("\nThe reversing order is:");
for(input--;input>=i;input--){
	printf("%d\t",*(ptr+input));
}
printf("\n\n\n");
}