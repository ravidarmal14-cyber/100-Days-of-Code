#include <stdio.h>

int main() {
    float cp, sp , percentage;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit: %.0f%%\n", percentage);
    } else if (sp < cp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss: %.2\0f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
