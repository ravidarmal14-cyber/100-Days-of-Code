 /*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

 #include <stdio.h>

int main(void)
{
	int number, is_prime = 1;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 2) {
		is_prime = 0;
	} else {
		for (int divisor = 2; divisor <= number / divisor; divisor++) {
			if (number % divisor == 0) {
				is_prime = 0;
				break;
			}
		}
	}

	if (is_prime)
		printf("%d is prime.\n", number);
	else
		printf("%d is not prime.\n", number);

	return 0;
}
