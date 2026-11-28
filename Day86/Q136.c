/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

int main() {
    char opStr[20];
    int a, b;
    enum Menu choice = INVALID;

    printf("Enter operation and two integers (e.g., ADD 10 20): ");
    scanf("%19s %d %d", opStr, &a, &b);

    if (strcmp(opStr, "ADD") == 0) {
        choice = ADD;
    } else if (strcmp(opStr, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if (strcmp(opStr, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    }

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
