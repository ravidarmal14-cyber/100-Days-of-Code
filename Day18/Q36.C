/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main(void)
{
	int first, second, remainder;

	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);

	while (second != 0) {
		remainder = first % second;
		first = second;
		second = remainder;
	}

	printf("HCF = %d\n", first);
	return 0;
}
