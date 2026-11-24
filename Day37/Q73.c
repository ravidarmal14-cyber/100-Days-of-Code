/*Q73: Find the sum of each row of a matrix and store it in an array.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum[r];

    for (int i = 0; i < r; i++) {
        sum[i] = 0;
        for (int j = 0; j < c; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
