//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main(void)
{
    float sp, cp;

    printf("Enter selling price: ");
    scanf("%f", &sp);

    printf("Enter cost price: ");
    scanf("%f", &cp);

    if (sp > cp) {
        float profit = sp - cp;
        float profit_percentage = (profit / cp) * 100;
        printf("Profit percentage: %.2f%%\n", profit_percentage);
    } else if (cp > sp) {
        float loss = cp - sp;
        float loss_percentage = (loss / cp) * 100;
        printf("Loss percentage: %.2f%%\n", loss_percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}