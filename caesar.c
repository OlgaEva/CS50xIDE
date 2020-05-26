#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    string s = get_string("plaintext: ");

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("ciphertext: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", (int) s[i] + (int) argv[1]);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}

