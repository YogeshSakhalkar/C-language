#include<stdio.h>
void main09(){
int i,j;
for(i=0;i<=3;i++){
	for(j=3;j>=i;j--){
		printf("*");
	}
	printf("\n");
}
}
void main(){
	int i,j,k;
for(i=0;i<=3;i++){
for(j=3;j>i;j--){
	printf(" ");
		}
for(k=0;k<=i;k++){
	printf("*");
	printf(" ");
	}
printf("\n");
	}
}


void main87(){
	int i,j;
for(i=0;i<=3;i++){
for(j=0;j<=i;j++){
	printf("*");
		}
printf("\n");
	}
}


void main98(){
	int i,j;
for(i=0;i<=3;i++){
	
for(j=0;j<=i;j++){
	printf(" ");
		}
printf("*");
printf("\n");
	}
}