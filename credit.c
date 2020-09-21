#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long n;
    int digit;
    // to reprompt when invalid
    do
    {
        n = get_long("Number: ");
        long i;
        digit = 1;
        for (i = n; i >= 10; i /= 10)
        {
            digit++;
        }
    
    }
    while (digit < 0 || digit > 16);    
    long j;
    int resto;
    int sumtot = 1;
    int sumimpar = 0;
    int sumpar = 0;
    int parx2;
    int contador = 0;
    // checksum para ver si es valida
    for (j = n; j > 0; j /= 10)
    {
        contador++;
        resto = j % 10;
        // es par?
        if (contador % 2 == 0)
        {
            parx2 = resto * 2;
            if (parx2 >= 10)
            {
                sumpar += 1 + (parx2 % 10);
            }
            else 
            {
                sumpar += parx2;
            }
        }
        else 
        {
            sumimpar += resto;
        }
    }
    sumtot = sumimpar + sumpar;
    // es legit?
    if (sumtot % 10 == 0)
    {
        long p = pow(10, (digit - 1));
        // Es american express?
        if ((digit == 15) && ((n / 10000000000000 == 34) || (n / 10000000000000 == 37)))
        {
            printf("AMEX\n");
        }
        // es mastercard?
        else if ((digit == 16) && ((n / 100000000000000 >= 51) && (n / 100000000000000 <= 55)))
        {
            printf("MASTERCARD\n");
        }
        // es visa?
        else if ((digit >= 13) && (digit <= 16) && ((n / p) == 4))
        {
            printf("VISA\n");
        }
        // es invalida
        else
        {
            printf("INVALID\n");
        }
    }    
    else
    {
        printf("INVALID\n");
    }

}

