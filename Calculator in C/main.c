#include <stdio.h>
#include <conio.h>

// Creating global variable to store values and result
char operation;
float num1, num2, result;

// Declaring functions to perform specific task
void printingChoice();
void printingSelectedOperation();
void takingNumbers();
void performingOperations();

void main()
{
    clrscr();
    printingChoice();            // call printingChoice() to take operator input
    printingSelectedOperation(); // call printingSelectedOperation() to display selected operation
    takingNumbers();             // call takingNumbers() to take input of two numbers
    performingOperations();      // call performingOperations() to perform the operation
    getch();
}

void printingChoice()
{
    // Printing Choice
    printf("Choose an operator(+, -, *, /, <, >, <=, >=, ==, !=) to perform the operation in C Calculator\n");
    // Taking an operator
    scanf("%c", &operation);
}

void printingSelectedOperation()
{
    // Printing selected operation
    if (operation == '+')
    {
        printf("You have selected: Addition\n");
    }
    else if (operation == '-')
    {
        printf("You have selected: Subtraction\n");
    }
    else if (operation == '*')
    {
        printf("You have selected: Multiplication\n");
    }
    else if (operation == '/')
    {
        printf("You have selected: Division\n");
    }
    else if (operation == '<')
    {
        printf("You have selected: less than\n");
    }
    else if (operation == '>')
    {
        printf("You have selected: Greater than\n");
    }
    else if (operation == '<=')
    {
        printf("You have selected: Less than or equal to\n");
    }
    else if (operation == '>=')
    {
        printf("You have selected: Greater than or equal to\n");
    }
    else if (operation == '==')
    {
        printf("You have selected: Equal to\n");
    }
    else if (operation == '!=')
    {
        printf("You have selected: Not equal to\n");
    }
}

void takingNumbers()
{
    printf("Enter the first number: ");
    scanf("%f", &num1); // Taking first number
    printf("Enter the second number: ");
    scanf("%f", &num2); // Taking second number
}

void performingOperations()
{
    switch (operation)
    {
    case '+':
        result = num1 + num2; // Add two numbers
        printf("Addition of %.2f and %.2f is: %.2f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2; // Subtract two numbers
        printf("Subtraction of %.2f and %.2f is: %.2f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2; // Multiply two numbers
        printf("Multiplication of %.2f and %.2f is: %.2f\n", num1, num2, result);
        break;
    case '/':
        if (num2 == 0) // If num2 == 0 than take another number
        {
            printf("\nDivisor cannot be zero, Please enter another value!\n");
            scanf("%f", &num2);
        }
        result = num1 / num2; // Divide two numbers
        printf("Division of %.2f and %.2f is: %.2f\n", num1, num2, result);
        break;

    case '<':
        if (
            num1 < num2) // Checking num1 is less than num2 or not
        {
            printf(" %.2f is less than %.2f", num1, num2);
        }
        else
        {
            printf(" %.2f is not less than %.2f", num1, num2);
        }
        break;

    case '>':
        if (num1 > num2) // Checking num1 is Greater than num2 or not
        {
            printf(" %.2f is greater than %.2f", num1, num2);
        }
        else
        {
            printf(" %.2f is not greater than %.2f", num1, num2);
        }
        break;

    case '<=':
        if (num1 <= num2) // Checking num1 is less than or equal to num2 or not
        {
            printf(" %.2f is less than or equal to %.2f", num1, num2);
        }
        else
        {
            printf(" %.2f is not less than or equal to %.2f", num1, num2);
        }
        break;

    case '>=':
        if (num1 >= num2) // Checking num1 is greater than or equal to num2 or not
        {
            printf(" %.2f is greater than or equal to %.2f", num1, num2);
        }
        else
        {
            printf(" %.2f is not greater than or equal to %.2f", num1, num2);
        }
        break;

    case "==":
        if (num1 == num2)
        {
            printf("%.2f is equal to %.2f", num1, num2);
        }
        break;

    case "!=":
        if (num1 != num2)
        {
            printf("%.2f is not equal to %.2f", num1, num2);
        }
        break;

    default: // use default to print default message if any condition is not satisfied
        printf(" Something is wrong!! Please check the options ");
    }
}
