/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size1 = 5, size2 = 5;
    int merged[size1 + size2];
    
    // Copy elements from first array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    
    // Copy elements from second array
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
    
    // Print merged array
    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}