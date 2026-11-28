/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    INVALID
};

int main() {
    char input[20];
    enum TrafficLight signal = INVALID;

    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    scanf("%19s", input);

    if (strcmp(input, "RED") == 0) {
        signal = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        signal = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        signal = GREEN;
    }

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
    }

    return 0;
}
