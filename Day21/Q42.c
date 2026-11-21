/*
Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main(void)
{
	long long number, sum = 0;

	printf("Enter a positive integer: ");
	if (scanf("%lld", &number) != 1 || number <= 0) {
		printf("Please enter a positive integer.\n");
		return 1;
	}

	for (long long divisor = 1; divisor <= number / 2; divisor++) {
		if (number % divisor == 0) {
			sum += divisor;
		}
	}

	if (sum == number) {
		printf("%lld is a perfect number.\n", number);
	} else {
		printf("%lld is not a perfect number.\n", number);
	}

	return 0;
}
