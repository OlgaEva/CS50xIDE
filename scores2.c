#include <cs50.h>
#include <stdio.h>
// change scores program to be dynamic


int main(void)
{
    int n = get_int("Number of Scores: ");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: TODO\n");
}