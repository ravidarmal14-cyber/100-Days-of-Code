/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main(void)
{
	int number, original, digits = 0, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0) {
		printf("%d is not an Armstrong number.\n", number);
		return 0;
	}

	original = number;

	if (number == 0) {
		digits = 1;
	} else {
		int temp = number;
		while (temp != 0) {
			digits++;
			temp /= 10;
		}
	}

	number = original;
	do {
		int digit = number % 10;
		int power = 1;

		for (int i = 0; i < digits; i++) {
			power *= digit;
		}
		sum += power;
		number /= 10;
	} while (number != 0);

	if (sum == original) {
		printf("%d is an Armstrong number.\n", original);
	} else {
		printf("%d is not an Armstrong number.\n", original);
	}

	return 0;
}
