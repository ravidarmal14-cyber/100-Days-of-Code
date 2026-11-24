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
    int n, m, i;
    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);
    
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);
    
    int b[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    
    int c[n + m];

    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < m; i++) {
        c[n + i] = b[i];
    }

    for (i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}
