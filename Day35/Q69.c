/*Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest, secondLargest;

    if (a[0] > a[1]) {
        largest = a[0];
        secondLargest = a[1];
    } else {
        largest = a[1];
        secondLargest = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}
