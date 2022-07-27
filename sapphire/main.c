#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "sapphire.h"

int main()
{

    for (int i = -64; i < 64; i++)
    {
        for (int j = 0; j < abs(i); j++)
            printf(" ");

        printf("%s\n", sapphire);
    }

    while (true);

    return 0;
}