#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input var (the height)
    int n;

    do
    {
        // Taking user input
        n = get_int("Height: ");
    } while (n < 1 || n > 8); // keep asking for input while it's less than 1 or greater than 8

    // printing out the hashes/hashtags

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1){
                 printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
}