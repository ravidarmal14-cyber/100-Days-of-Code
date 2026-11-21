
/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main() {
    int a;
    int b;
    char op;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Choose what you want to do (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            printf("%d", a / b);
            break;

        case '%':
            printf("%d", a % b);
            break;

        default:
            printf("Invalid operation");
    }

    return 0;
}
