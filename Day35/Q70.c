/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    
    int temp[n];
    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }
    
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    rotateArray(arr, n, k);
    
    printf("Array after rotating right by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}