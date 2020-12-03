#include<stdio.h>
void main()
{
	int area=0,perameter=0,lenght,width;
	printf("enter the length & width \n");
	scanf("%d %d",&lenght,&width);
	area=lenght*width;
	perameter=2*area;
	printf("\n the area of regtangle is %d",area);
	printf("\n the perameter of regtangle is %d",perameter);
}