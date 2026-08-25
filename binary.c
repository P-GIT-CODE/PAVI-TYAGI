//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 2;
        binary = binary + r * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}