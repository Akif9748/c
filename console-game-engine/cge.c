
#include <stdio.h>
#ifdef _WIN32
#define clear "cls"
#else
#define clear "clear"
#endif

#define x 16
#define y 8

char map[y][x];
const char character = 'A';

void Clear()
{
    system(clear);
}
void Render()
{
    Clear();
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
            printf("%c", map[i][j]);
        printf("\n");
    }
}

void Set(int _x, int _y, char character)
{

    map[_y][_x] = character;
    Render();
}

char Get(int _x, int _y)
{
    return map[_y][_x];
}

void CreateMap()
{

    for (int line = 0; line < y; line++)
        for (int i = 0; i < x; i++)
            map[line][i] = character;

}
void Reset()
{
    CreateMap();
}


