#include<stdio.h>
void main(){
	int arr[5]={10,20};
	int i;
	int* ptr;
	int *ptr1;
	ptr=&arr[0];
	ptr1=arr;
	printf("\nThe value *ptr+i:");
	for(i=0;i<5;i++)
		printf("%d\t",*ptr+i);

	printf("\nThe value *(ptr+i):");
	for(i=0;i<5;i++)
		printf("%d\t",*(ptr+i));

	printf("\nThe value *(arr+i):");
	for(i=0;i<5;i++)
		printf("%d\t",*(arr+i));

	printf("\nThe value ptr[i]");
	for(i=0;i<5;i++)
		printf("%d\t",ptr1[i]);

		printf("The value *(i+ptr):");
	for(i=0;i<5;i++)
		printf("%d\t",*(i+ptr));

		printf("The value i(ptr1):");
	for(i=0;i<5;i++)
		printf("%d\t",i(ptr1));
	printf("\n\n\n");
}