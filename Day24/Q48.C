/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345

Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main(void)
{
	int question, i, j, spaces;

	printf("Enter question number (48-54): ");
	scanf("%d", &question);

	switch (question) {
	case 48:
		for (i = 1; i <= 5; i++) {
			for (j = 1; j <= i; j++)
				printf("%d", j);
			printf("\n");
		}
		break;

	case 49:
		for (i = 5; i >= 1; i--) {
			for (j = i; j <= 5; j++)
				printf("%d", j);
			printf("\n");
		}
		break;

	case 50:
		for (i = 5; i >= 1; i--) {
			for (j = 1; j <= 5 - i; j++)
				printf(" ");
			for (j = 1; j <= i; j++)
				printf("*");
			printf("\n");
		}
		break;

	case 51:
		for (i = 5; i >= 1; i--) {
			for (spaces = 1; spaces < i; spaces++)
				printf(" ");
			for (j = i; j <= 5; j++)
				printf("%d", j);
			printf("\n");
		}
		break;

	case 52:
		for (i = 1; i <= 5; i++) {
			for (j = 1; j <= i; j++)
				printf("*\n");
			printf("\n");
		}
		break;

	case 53:
		for (i = 1; i <= 5; i++) {
			for (j = 1; j <= 2 * i - 1; j++)
				printf("*");
			printf("\n");
		}
		for (i = 4; i >= 1; i--) {
			for (j = 1; j <= 2 * i - 1; j++)
				printf("*");
			printf("\n");
		}
		break;

	case 54:
		for (i = 1; i <= 4; i++) {
			for (spaces = 1; spaces <= 4 - i; spaces++)
				printf(" ");
			for (j = 1; j <= 2 * i - 1; j++)
				printf("*");
			printf("\n");
		}
		for (i = 3; i >= 1; i--) {
			for (spaces = 1; spaces <= 4 - i; spaces++)
				printf(" ");
			for (j = 1; j <= 2 * i - 1; j++)
				printf("*");
			printf("\n");
		}
		break;

	default:
		printf("Invalid question number.\n");
	}

	return 0;
}
