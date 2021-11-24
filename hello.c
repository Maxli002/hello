#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask user's name and print it
    string name = get_string("What is your name?\n");

    printf("hello, %s\n", name);
}
