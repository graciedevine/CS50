#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input invalid if n < 1
    int n;
    do
    {
        n = get_int("Height: ");

    }
    while (n < 1 || n >= 9);
    // for each column
    for (int i = 0; i < n; i++)
    {
        // add spaces
        for (int k = n - i; k > 1; k--)
        {
            printf(" ");
        }
        // for each row
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}