#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initial_llamas, final_llamas, years, n1, n2;

    // Prompt for start size
    initial_llamas = get_int("Enter the initial number of llamas: \n");
    while (initial_llamas < 9)
    {
        initial_llamas = get_int("Enter the initial number of llamas:\n ");
    }

    // Prompt for end size
    final_llamas = get_int("Enter the final number of llamas:\n ");
    while (final_llamas < initial_llamas)
    {
        final_llamas = get_int("Enter the final number of llamas:\n ");
    }

    // Calculate number of years until we reach threshold
    years = 0;
    while (initial_llamas < final_llamas)
    {
        // Calculate the number of llamas born (n1)
        n1 = (initial_llamas / 3) + initial_llamas;
        // Calculate the number of llamas that died (n2)
        n2 = initial_llamas / 4;
        initial_llamas = n1 - n2;
        // Increment 'years' by one for each iteration
        years++;
    }

    // Print number of years
    printf("Years: %i\n", years);

    return 0;
}

