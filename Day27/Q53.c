 /*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
 #include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 9; i += 2) {
		for (int j = 0; j < i; j++)
			putchar('*');
		putchar('\n');
	}

	for (int i = 7; i >= 1; i -= 2) {
		for (int j = 0; j < i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
