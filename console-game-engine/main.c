#include "cge.c"
#include <conio.h> /* getch() and kbhit() */

int main()
{

    int pos[] = {0, 0};
    char character = ' ';
    int moves = 0;

    CreateMap();
    Render();
    Set(pos[0], pos[1], character);

    while (1)
    {
        char c = getch();

        // For exit:
        if (c == 'c')
        {
            Clear();
            printf("Game finished with %d moves.", moves);
            break;
        }
        else
        {

            // Reset map:
            Reset();

            // Change pos:
            switch (c)
            {
            case 'a':
                if (pos[0] > 0)
                    pos[0]--;
                break;

            case 'd':
                if (pos[0] < x - 1)
                    pos[0]++;
                break;

            case 'w':
                if (pos[1] > 0)
                    pos[1]--;
                break;

            case 's':
                if (pos[1] < y - 1)
                    pos[1]++;
                break;

            default:
                break;
            }

            // SET and RENDER:
            Set(pos[0], pos[1], character);
            moves++;
        }
    }
}