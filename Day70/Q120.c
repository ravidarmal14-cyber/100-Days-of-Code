/*Q120: Write a program to take a string input. Change it to sentence case.


Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int cap = 1;
    for(int i = 0; s[i] != '\0'; i++) {
        if(isspace(s[i])) {
            cap = 1;
        } else if(cap) {
            s[i] = toupper(s[i]);
            cap = 0;
        } else {
            s[i] = tolower(s[i]);
        }
    }
    printf("%s\n", s);
    return 0;
}