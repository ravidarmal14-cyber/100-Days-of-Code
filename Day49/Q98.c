/*Q98: Print initials of a name with the surname displayed in full.


Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int len = strlen(s);
    int last_space = -1;
    for(int i = len - 1; i >= 0; i--) {
        if(s[i] == ' ') {
            last_space = i;
            break;
        }
    }
    if(last_space == -1) {
        printf("%s\n", s);
        return 0;
    }
    if(s[0] != ' ') putchar(s[0]);
    for(int i = 1; i < last_space; i++) {
        if(s[i-1] == ' ' && s[i] != ' ') {
            putchar(s[i]);
        }
    }
    printf(" %s\n", &s[last_space + 1]);
    return 0;
}