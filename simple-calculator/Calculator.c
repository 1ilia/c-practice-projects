#include <stdio.h>

int main() {
    
    // Declare variables
    float second_number = 0.0;
    float first_number = 0.0;
    float result = 0.0;
    char action = '\0';

    // First number
    printf("Enter the first number: ");
    scanf("%f", &first_number);

    // Choose operation
    printf("Enter the operator (+ - * /): ");
    /* 
       The leading space tells scanf to skip over any "whitespace" 
       characters (blanks, tabs, and—crucially—newlines) 
    */
    scanf(" %c", &action); 

    // Second number
    printf("Enter the second number: ");
    scanf("%f", &second_number);

    // Calculating
    switch(action) {

        // Addition
        case '+':
            result = first_number + second_number; 
            printf("Result: %.4f\n", result);
            break;

        // Subtraction
        case '-':
            result = first_number - second_number;
            printf("Result: %.4f\n", result);
            break;

        // Multiplication
        case '*':
            result = first_number * second_number;
            printf("Result: %.4f\n", result);
            break;

        // Division
        case '/':
            if(second_number == 0) {
                printf("Error: You can't divide by zero!\n");
            }
            else {
                result = first_number / second_number;
                printf("Result: %.4f\n", result);
            }
            break;

        default:
            printf("Invalid operator! Please use (+ - * /)\n");
    }
    
    return 0;
}
