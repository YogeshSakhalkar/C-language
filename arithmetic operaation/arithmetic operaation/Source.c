#include<stdio.h>
void revstring();

int main()
{
printf("enter a string:");
revstring();

}

void revstring()
{
char str;
scanf_s("%c", &str);
if (str != '\n')
{
revstring();
printf("%c", str);
}
}
