#include<stdio.h>
int mystrlen(char*);

void main(){
	char str[10]="abcc";
	int a;
	a=mystrlen(str);
	printf("the length is :: %d\n\n\n",a);
}

int mystrlen(char *str){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}