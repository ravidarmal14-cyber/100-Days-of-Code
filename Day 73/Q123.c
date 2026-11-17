/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main() {
    FILE *f = fopen("file.txt", "r");
    char c;
    int chars = 0, words = 0, lines = 0, in_word = 0;
    while((c = fgetc(f)) != EOF) {
        chars++;
        if(c == '\n') lines++;
        if(c == ' ' || c == '\n' || c == '\t') {
            in_word = 0;
        } else if(!in_word) {
            in_word = 1;
            words++;
        }
    }
    fclose(f);
    printf("Characters: %d, Words: %d, Lines: %d\n", chars, words, lines);
    return 0;
}