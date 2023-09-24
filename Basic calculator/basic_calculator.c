#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double num1;
    double num2;
    char operation;
    double result;
    
    printf("Welcome to Basic Calculator\n");
    printf("\n");
	printf("Enter an operation (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number:");
    scanf("%lf", &num2);
    

    switch(operation)
	{
    	case '+':
    		result = num1 + num2;
    		printf("%lf", result);
    		break;
    	case '-':
    		result = num1 - num2;
    		printf("%lf", result);
    		break;
    	case '*':
    		result = num1 * num2;
    		printf("%lf", result);
    		break;
		case '/':
    		result = num1 / num2;
    		printf("%lf", result);
    		break;	
    	default: 
    	printf("%c is not valid", operation);
    	
	}
    
    
    return 0;
}