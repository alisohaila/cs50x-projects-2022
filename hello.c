#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("hello, world\n");

    // CS50's approach
    string name1 = get_string("What's your name? ");
    printf("Hello, %s\n", name1);
}
