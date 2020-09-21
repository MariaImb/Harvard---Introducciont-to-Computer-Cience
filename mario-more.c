#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // use do-while loop to re-promt the user until they cooperate
    do 
    {
        n = get_int("Height: ");
    }
    // combine boolean expresions whit || that means or
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        //printing spaces 
        for (int j = 0; j < (n - i) - 1; j++)
        {
            printf(" ");
        }
        //printing hashes
        for (int j = (n - i) - 1; j < n; j++)
        {
            printf("#");
        }
        for (int j = (n + 1); j < (n + 3); j++)
        {
            printf(" ");
        }
        for (int j = (n + 3); j < (n + 4 + i); j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
