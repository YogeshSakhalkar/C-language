#include<stdio.h>
void myfun(int*,int);
void main(){
int i,input;
int arr[5]={1,1,9,1,1};
int* ptr;
ptr=arr;
myfun(arr,5);
}

void myfun(int*ptr,int input){
	int i=0,sum=0;
	for(i=0;i<input;i++){
	sum=sum+i[ptr];
	}
	printf("\nThe output is ::%d\n\n\n",sum);

}