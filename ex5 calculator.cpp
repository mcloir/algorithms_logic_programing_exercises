#include <stdio.h>

int main () {
    float num1, num2, result;
    char oper;

    printf("Please, enter the first number: ");
    scanf("%f", &num1);
    
    printf("Please, enter the operator (+, -, *, /): ");
    scanf(" %c", &oper);

    printf("Now, enter the second number: ");
    scanf("%f", &num2);

    switch (oper) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("The second number cannot be zero for division.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }
    
    printf(" The result of %.2f %c %.2f = %.2f\n", num1, oper, num2, result);
    return 0;
}