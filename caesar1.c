#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// bool check(string argument);

int main(int argc, string argv[])
{
    string arg = argv[1];

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(arg); i < n; i++)
        {
            if (!!isdigit(arg[i]) == 0)
            {
                printf("Usage: ./caesar key\nKey must be numeric\n");
                return 1;
             }
        }

    }

    string s = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int new = (int) s[i] - 97;
            printf("%c", (((new + atoi(argv[1])) % 26) + 97));
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int new = (int) s[i] - 65;
            printf("%c", (((new + atoi(argv[1])) % 26) + 65));
        }
        else
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");
    return 0;
}

// bool check(string argument)
// {
//     string arg = argument;

//     for (int i = 0, n = strlen(arg); i < n; i++)
//     {
//         if (!!isdigit(arg[i]) == 0)
//         {
//             // printf("Usage: ./caesar key\nKey must be numeric\n");
//             return false;
//         }
//     return true;
//     }
// }