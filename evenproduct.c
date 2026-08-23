//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main()
{
    int i, n, product= 1, count = 0;

    printf("enter n: ");
    scanf("%d", &n);

    for(i = 1; count < n; i++)
    {
        if(i % 2 == 0)
        {
            product = product * i;
            count++;
        }
    }

    printf("product = %d", product);

    return 0;
}