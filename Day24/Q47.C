/*Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main(void)
{
	int row, column;

	for (row = 1; row <= 5; row++) {
		for (column = 1; column <= row; column++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
