#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    // use do to re-promt the user until they cooperate
    do 
    {
        n = get_float("Change owed: ");
    }
    // only positive numbers
    while (n < 0);
    int cent = round(n * 100);
    int cquaters = 0;

    //primero resto los quaters
    for (int i = cent; i >= 25; i -= 25)
    {
        cquaters += 1;
    } 
    // luego resto los dimes
    int cdimes = 0;
    for (int j = (cent - (25 * cquaters)); j >= 10; j -= 10)
    {
        cdimes += 1;
    }
    // luego resto los nickels
    int cnickels = 0;
    for (int k = (cent - (25 * cquaters) - (10 * cdimes)); k >= 5; k -= 5)
    {
        cnickels += 1;
    }
    //luego resto los pennies
    int cpennies = cent - (25 * cquaters) - (10 * cdimes) - (5 * cnickels);
    // calculo el total de monedas
    int total = cquaters + cdimes + cnickels + cpennies;
    printf("%i\n", total);
}   
