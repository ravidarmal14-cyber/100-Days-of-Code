/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[20];
    printf("Enter the date in DD/MM/YYYY: ");
    scanf("%s", date);
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int d, m, y;
    sscanf(date, "%d/%d/%d", &d, &m, &y);
    printf("%02d-%s-%d\n", d, months[m], y);
    return 0;
}