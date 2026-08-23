//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main()
{
    int i, n, sum = 0, count = 0;

    printf("enter n: ");
    scanf("%d", &n);

    for(i = 1; count < n; i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
            count++;
        }
    }

    printf("sum = %d", sum);

    return 0;
}