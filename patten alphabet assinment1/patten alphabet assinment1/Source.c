#include<stdio.h>
 
void main()
{
    int i,j,n,a;
	char alphabet;
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
		a=n-i+1;
        for(j=1;j<=a;j++)
        {
			alphabet=j+64;
            printf("%c",alphabet);
        }
        printf("\n");
    }
}