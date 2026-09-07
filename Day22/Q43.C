 /*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

 #include <stdio.h>

int main(void)
{
	int number, original, digit;
	int sum = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0) {
		printf("%d is not a strong number.\n", number);
		return 0;
	}

	original = number;

	do {
		int factorial = 1;

		digit = number % 10;
		for (int i = 1; i <= digit; i++) {
			factorial *= i;
		}
		sum += factorial;
		number /= 10;
	} while (number != 0);

	if (sum == original)
		printf("%d is a strong number.\n", original);
	else
		printf("%d is not a strong number.\n", original);

	return 0;
}
