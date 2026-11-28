/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER,
    INVALID
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[30];

    printf("Enter gender (MALE, FEMALE, OTHER): ");
    scanf("%29s", input);

    if (strstr(input, "FEMALE") != NULL) {
        p.gender = FEMALE;
    } else if (strstr(input, "MALE") != NULL) {
        p.gender = MALE;
    } else if (strstr(input, "OTHER") != NULL) {
        p.gender = OTHER;
    } else {
        p.gender = INVALID;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid Gender\n");
    }

    return 0;
}
