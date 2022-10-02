#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("hello, world\n");

    // CS50's approach
    string name1 = get_string("What's your name? ");
    printf("Hello, %s\n", name1);

    // Standard C's approach
    char name[20];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s \n", name);
}