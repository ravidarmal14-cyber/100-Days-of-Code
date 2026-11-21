/*Q28: Write a program to print the product of even numbers from 1 to n.


Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n;
    int product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        product=product*(2*i);
        
    }
    
    printf("%d",product);

    return 0;
}
