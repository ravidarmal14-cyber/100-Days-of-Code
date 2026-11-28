/*Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
    INVALID
};

int main() {
    char input[10];
    enum Month m = INVALID;
    const char *names[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    printf("Enter month (JAN to DEC): ");
    scanf("%9s", input);

    for (int i = JAN; i <= DEC; i++) {
        if (strcmp(input, names[i]) == 0) {
            m = (enum Month)i;
            break;
        }
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month\n");
    }

    return 0;
}
