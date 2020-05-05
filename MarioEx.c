#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //declare a variable type int in which to store user's input for height
    int n;
    do
    {
        n = get_int("Height: \n");
    }
    while ( n < 1 || n > 8);

    //create an outer for loop

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
            printf("#");
            }
        }
    //remember to print a new line
    printf("\n");
    }
}