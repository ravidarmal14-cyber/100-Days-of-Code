/*Q92: Find the first repeating lowercase alphabet in a string.


Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int freq[26] = {0};
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
            if(freq[s[i] - 'a'] == 2) {
                printf("%c\n", s[i]);
                return 0;
            }
        }
    }
    printf("None\n");
    return 0;
}