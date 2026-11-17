/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    FILE *f = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;
    while(fscanf(f, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(f);
    double avg = count > 0 ? (double)sum / count : 0;
    printf("Sum: %d, Average: %.2f\n", sum, avg);
    return 0;
}