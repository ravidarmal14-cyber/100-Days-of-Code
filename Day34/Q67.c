/*Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int arr[100], n, pos, value, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    
    printf("Enter value to insert: ");
    scanf("%d", &value);
    
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert element at given position
    arr[pos - 1] = value;
    n++;
    
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
