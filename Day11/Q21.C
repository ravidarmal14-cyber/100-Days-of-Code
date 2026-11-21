/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the month in number (1-12): ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        
    }

    return 0;
}