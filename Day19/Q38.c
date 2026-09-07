/* Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main(void)
{
	long long number, sum = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	do {
		sum += number % 10;
		number /= 10;
	} while (number != 0);

	printf("Sum of digits = %lld\n", sum);
	return 0;
}
