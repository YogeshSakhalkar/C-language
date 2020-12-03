#include<stdio.h>
void myfun(int [],int,int);
void main()
{
	int sum=0,input,a[100],i,search;
	int*ptr;
	ptr=a; 
	printf("Enter the to total number \n:");
		scanf("%d",&input);
		printf("Enter the input");
		for(i=1;i<=input;i++)
			scanf("%d",&a[i]);
		printf("Enter the number you want to search");
		scanf("%d",&search);
		myfun(ptr,search,input);
}

void myfun(int *ptr,int search,int input){
	int flag=0,i;
		for(i=1;i<=input;i++){
			if(search==ptr[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1){
			printf("The number is found");
		}
		else{
			printf("The number is not found");
		}

		printf("\n\n\n");
}