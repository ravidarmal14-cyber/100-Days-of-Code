/*Q94: Find the longest word in a sentence.


Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200], longest[100], current[100];
    int max_len = 0, j = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    for(int i = 0; ; i++) {
        if(s[i] == ' ' || s[i] == '\0') {
            current[j] = '\0';
            if(j > max_len) {
                max_len = j;
                strcpy(longest, current);
            }
            j = 0;
            if(s[i] == '\0') break;
        } else {
            current[j++] = s[i];
        }
    }
    printf("%s\n", longest);
    return 0;
}