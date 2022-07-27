#include <stdio.h>

#ifdef _WIN32
#define clear "cls"
#else
#define clear "clear"
#endif

void render(char array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%c%c%c", '[', array[i][j], ']');
        printf("\n");
    }
}
int main()
{
    char arr[10][10];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            arr[i][j] = i + 97;

    render(arr);
    while (1)
    {
        int x, y;
        char z;
        printf("\nHedef, x ve y, tip z!\n");
        scanf("%d %d %c", &x, &y, &z);
        arr[x][y] = z;
        system(clear);
        render(arr);
    }
}