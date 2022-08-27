#include <stdio.h>
#include <cs50.h>

// parameters with void - does not return anything
int main(void)
{
    // get_string comes with <cs50.h> - takes input
    string name = get_string("What's your name? ");
    // old fashioned string interpolation
    printf("hello, %s\n", name);
}