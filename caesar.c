# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv [])

{
    //El programa solo acepta 1 command-line argument, condicion argc != 2
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        //determino la longitud del segundo argumento o string
        int length = strlen(argv [1]);
        //hago un loop para verificar que cada caracter sea un digito entre 1 y 9
        for (int i = 0; i < length; i++)
        {
            if (argv[1][i] >= '0' && argv[1][i] <= '9')
            {

            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    // convierto el str 1 en el numero 1
    int k = atoi(argv[1]);
    
    string s = get_string("Plaintext: ");

    printf("ciphertext: ");

    int index;
    int index2;
    int ci;
    //itero dentro de cada char del plaintext
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //pregunto si es alfabetico
        if (isalpha(s[i]))
        {
            // funcion si es uppercase
            if (isupper(s[i]))
            {
                index = s[i] - 65;
                ci = (index + k) % 26;
                index2 = ci + 65;

                printf("%c", index2);
            }
            // funcion si es lowercase
            if (islower(s[i]))
            {
                index = s[i] - 97;
                ci = (index + k) % 26;
                index2 = ci + 97;

                printf("%c", index2);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}