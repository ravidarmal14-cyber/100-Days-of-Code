/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.


Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    char name[50];
    int age;
    scanf("%s %d", name, &age);
    FILE *f = fopen("info.txt", "w");
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("Data saved successfully.\n");
    return 0;
}