/*Q91: Remove all vowels from a string.


Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], res[100];
    int i, j = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    for(i = 0; s[i] != '\0'; i++) {
        char c = s[i] | 32;
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            res[j++] = s[i];
        }
    }
    res[j] = '\0';
    printf("%s\n", res);
    return 0;
}