/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int n, rev = 0, digit;
    

    printf("Enter a number: ");
    scanf("%d", &n);
    int org = n;

    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (org == rev){
      printf("The number is a palindrome!");
        }
    else{
      printf("The number isn't a palindrome!");
    }

    return 0;
}
