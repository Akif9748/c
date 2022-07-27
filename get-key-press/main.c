#include <stdio.h>
#include <conio.h> /* getch() and kbhit() */

int main()
{
    char c;

    for (;;)
    {
       // printf("hello\n");
       // if (kbhit())
       // {
            c = getch();
            printf("%c\n", c);
       // }
    }
    return 0;
}