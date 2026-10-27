#include <stdio.h>
/* 
*Autor: Andrii Khaustovych
* 21.10.2026
*CALCULATOR
*/

void calculator_calculate(double operand1, char operation, double operand2){
    double result;
    
    switch (operation){

        case '+':
            result = operand1 + operand2;
            printf("%f %c %f = %f\n", operand1, operation, operand2, result);
            break;

        case '-':
            result = operand1 - operand2;
            printf("%f %c %f = %f\n", operand1, operation, operand2, result);
            break;

        case '*':
            result = operand1 * operand2;
            printf("%f %c %f = %f\n", operand1, operation, operand2, result);
            break;

        case '/':
            if (operand2 == 0){
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = operand1 / operand2;
                printf("%f %c %f = %f\n", operand1, operation, operand2, result);
            }
            break;

        default:
            printf("Error: Invalid math operation '%c'.\n", operation);
            break;
    }
}
int main(){
    double operand1, operand2;
    char operation;
    char choice;
    do {
        printf("\n--- CALCULATOR ---\n");
        printf("Enter 1st operand: ");
        if (scanf("%lf", &operand1) != 1){
            printf("Error reading number!\n");
            return 1;
        }
        printf("Enter operation (+, -, *, /): ");
        scanf(" %c", &operation);

        printf("Enter 2nd operand: ");
        if (scanf("%lf", &operand2) != 1){
            printf("Error reading number!\n");
            return 1;
        }
        calculator_calculate(operand1, operation, operand2);
    do{  
        printf("\nDo you want to continue with another calculation? (Y/N): ");
        scanf(" %c", &choice);
        if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
              printf("Invalid input! Please press 'Y' to continue or 'N' to exit.\n");
     }
       } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');
        
      } while (choice == 'Y' || choice == 'y');

    printf("Calculator program finished.\n");
    return 0;
}
