# include <stdio.h>
# include <cs50.h>
# include <math.h>
# include <ctype.h>

int main(void)

{
    string s = get_string("Text: ");
    // number of letters
    int letters = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            letters++;
        }
    }
    // printf("Letters: %i\n", letters);
    // number of words
    int words = 1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            words++;
        }
    }
    // printf("Words: %i\n", words);
    //number of sentenses
    int sentences = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            sentences++;
        }
    }
    // printf("Sentences: %i\n", sentences);
    float L;
    float S;
    float index;
    int index1;
    L = ((float)letters / words) * 100;
    // printf("L: %.2f \n", L);
    S = ((float)sentences / words) * 100;
    // printf("S: %.2f \n", S);
    index = 0.0588 * L - 0.296 * S - 15.8;
    index1 = round(index);
    if (index1 < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index1 > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index1);
    }
}