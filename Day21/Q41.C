 /*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
 #include <stdio.h>

int main(void)
{
	long long number, first, last, power = 1, middle, swapped;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	if (number < 10) {
		swapped = number;
	} else {
		last = number % 10;
		while (number / power >= 10)
			power *= 10;

		first = number / power;
		middle = (number % power) / 10;
		swapped = last * power + middle * 10 + first;
	}

	printf("Number after swapping first and last digits: %lld\n", swapped);
	return 0;
}
