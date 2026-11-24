/*Q97: Print the initials of a name.


Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    if(s[0] != '\0' && s[0] != ' ') {
        putchar(s[0]);
    }
    for(int i = 1; s[i] != '\0'; i++) {
        if(s[i - 1] == ' ' && s[i] != ' ') {
            putchar(s[i]);
        }
    }
    printf("\n");
    return 0;
}