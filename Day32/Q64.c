/*Q64: Find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int freq[10] = {0};

    while (n > 0) {
        int digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    int max = 0;
    int answer = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}
