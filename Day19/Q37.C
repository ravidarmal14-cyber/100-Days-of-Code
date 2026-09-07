/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/#include <stdio.h>

int main(void)
{
	int a, b, x, y, gcd;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	x = a;
	y = b;
	while (y != 0) {
		int remainder = x % y;
		x = y;
		y = remainder;
	}

	gcd = x;
	printf("LCM = %d\n", (a / gcd) * b);

	return 0;
}
