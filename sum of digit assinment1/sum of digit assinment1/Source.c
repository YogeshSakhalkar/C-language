#include <stdio.h>
void sum_of_digit(int);
void main()
{
	int n;
	printf("Enter an integer\n");
   scanf("%d", &n);
   sum_of_digit(n);

 }
void sum_of_digit(int n)
{
	int t, sum = 0, remainder;

 

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
	  printf("%d\n",remainder);
      sum       = sum + remainder;
	  printf("%d\n",sum);
      t         = t / 10;
	  printf("%d\n",t);
	  printf("\n\n\n");
   }

   printf("Sum of digits of %d = %d\n", n, sum);
}
