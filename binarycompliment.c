//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    char n[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", n);

    for(i = 0; n[i] != '\0'; i++)
    {
        if(n[i] == '0')
            n[i] = '1';
        else
            n[i] = '0';
    }

    printf("1's complement = %s", n);

    return 0;
}