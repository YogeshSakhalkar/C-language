#include <stdio.h>

int main()
{
    int i,j,rows,space=0;
printf("Enter the number of rows");
scanf("%d",&rows);//taking numer of rows from user

    for(i=rows; i>=1; i--){   //for each row
            //outer for loop
        for(j=1; j<=space; j++)//print space at the begining
        printf("  ");
		
         for(j=1; j<=i; j++)//print right side of pyramid

        printf("%d  ",j);
		 
         for(j=i-1; j>=1; j--)//print right side of pyramid
        printf("%d   ",j);
     printf("\n");
    space++;
    }
}