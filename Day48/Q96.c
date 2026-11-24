/*Q96: Reverse each word in a sentence without changing the word order.


Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int start = 0, end = 0;
    for(int i = 0; ; i++) {
        if(s[i] == ' ' || s[i] == '\0') {
            end = i - 1;
            for(int j = end; j >= start; j--) {
                putchar(s[j]);
            }
            if(s[i] == '\0') break;
            putchar(' ');
            start = i + 1;
        }
    }
    printf("\n");
    return 0;
}