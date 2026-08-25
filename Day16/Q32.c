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
