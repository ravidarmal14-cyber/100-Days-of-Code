/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("file.txt", "r");
    char c;
    int vowels = 0, consonants = 0;
    while((c = fgetc(f)) != EOF) {
        c = tolower(c);
        if(c >= 'a' && c <= 'z') {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(f);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}