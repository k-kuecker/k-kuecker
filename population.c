#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long s, e;
    long n = 0;
     {
     s = get_long("How many llamas do you have?: ");
    while (s <= 8)
        {
            s = get_long("Number of llamas must be larger than 8 \nHow many llamas do you have?: ");
        }
    e = get_long("How many llamas do you want?: ");
    while (e < s)
        {
            e = get_long("How many llamas do you want?: ");
        }
    if (s == e)
        {
            printf("Years: 0\n");
        }
    else
    do
        {
           s = s + ( s / 3) - (s / 4); n++;
        }
    while (s < e);
    printf("Years: %li\n", n);
     }

}


    // TODO: Prompt for start size
        // int s = get_startsize
    // TODO: Prompt for end size
        // int e = get_int("How many llamas do you want?:");
    // TODO: Calculate number of years until we reach threshold
       // int n = n + ( n / 3) - (n / 4);
    // TODO: Print number of years
       // printf("Years: %n\n", n);

