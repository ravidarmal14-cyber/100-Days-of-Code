#include <stdio.h>

int main() {
    int n, binary = 0, place = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 2;
        binary = binary + digit * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d", binary);

    return 0;
}
