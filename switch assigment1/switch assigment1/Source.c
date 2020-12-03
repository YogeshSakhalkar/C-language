// Program to create a simple calculator
#include <stdio.h>
double Arith(char,double,double);
void main() {
	    char op;
    double n1, n2;
	double sum;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);
	
		sum=Arith(op,n1,n2);
		printf("The results of that operation is : %lf",sum);
}

double Arith(char o,double num1,double num2){
	int result;
    switch(o)
    {
        case '+':
			result=num1+num2;
			return result;

        case '-':
			result=num1-num2;
            return result;

        case '*':
			result=num1*num2;
            return result;

        case '/':
			result=num1/num2;
            return result;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

}
