#include <stdio.h>
#include <stdlib.h>

// ANSI escape codes for text color
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// Driver code
int main()
{
    char ch;
    double a, b;
    while (1) {
        printf("Enter an operator (+, -, *, /), "
               "if want to exit press " ANSI_COLOR_RED "x" ANSI_COLOR_RESET ": ");
        scanf(" %c", &ch);
 
        // to exit
        if (ch == 'x')
            exit(0);
        printf("Enter two first and second operand: ");
        scanf("%lf %lf", &a, &b);
 
        // Using switch case we will differentiate
        // operations based on different operator
        switch (ch) {
 
        // For Addition
        case '+':
            printf(ANSI_COLOR_GREEN "%.1lf + %.1lf = %.1lf\n" ANSI_COLOR_RESET, a, b, a + b);
            break;
 
        // For Subtraction
        case '-':
            printf(ANSI_COLOR_BLUE "%.1lf - %.1lf = %.1lf\n" ANSI_COLOR_RESET, a, b, a - b);
            break;
 
        // For Multiplication
        case '*':
            printf(ANSI_COLOR_YELLOW "%.1lf * %.1lf = %.1lf\n" ANSI_COLOR_RESET, a, b, a * b);
            break;
 
        // For Division
        case '/':
            printf(ANSI_COLOR_MAGENTA "%.1lf / %.1lf = %.1lf\n" ANSI_COLOR_RESET, a, b, a / b);
            break;
 
        // If operator doesn't match any case constant
        default:
            printf(
                ANSI_COLOR_RED "Error! please write a valid operator\n" ANSI_COLOR_RESET);
        }
 
        printf("\n");
    }
}
