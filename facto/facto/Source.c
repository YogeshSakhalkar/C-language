#include<stdio.h>
void main(){
int fact=5,i=1,fact1=1;
while(i<=fact){
fact1=fact*fact1;
fact--;
}
printf("the factorail is%d",fact1);
}
