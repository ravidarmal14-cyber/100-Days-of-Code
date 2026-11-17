/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char src[50], dest[50];
    scanf("%s %s", src, dest);
    FILE *f1 = fopen(src, "r");
    FILE *f2 = fopen(dest, "w");
    char c;
    while((c = fgetc(f1)) != EOF) {
        fputc(c, f2);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}