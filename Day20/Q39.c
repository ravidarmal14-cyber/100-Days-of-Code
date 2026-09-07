/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main(void)
{
	long long number, product = 1;
	int digit, found = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	do {
		digit = (int)(number % 10);
		if (digit % 2 != 0) {
			product *= digit;
			found = 1;
		}
		number /= 10;
	} while (number != 0);

	if (found)
		printf("Product of odd digits = %lld\n", product);
	else
		printf("No odd digits found.\n");

	return 0;
}
