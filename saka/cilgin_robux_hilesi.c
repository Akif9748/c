#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

const char *FgCyan = "\x1b[36m";
const char *FgGreen = "\x1b[32m";
const char *Reset = "\x1b[0m";

const char BAS = '/', ORTA = '_', SON = '-';
const int UZUNLUK = 10;

void rpt(char chr, int repeat)
{
    for (int j = 0; j < repeat; j++)
        printf("%c", chr);
}
int main()
{
    char isim[20];
    int para;
    printf("Roblox adin ne cocuk?\n");
    scanf("%s", isim);

    printf("Pekala %s, soyle bakalim kac robuX istersin?\n", isim);
    scanf("%i", &para);
    printf("%i", para);

    for (int i = 0; i <= UZUNLUK; i++)
    {
        system("cls");

        printf(FgCyan);
        rpt(BAS, i);
        printf("%s%c%s", Reset, ORTA, FgGreen);

        rpt(SON, abs(UZUNLUK - i));
        printf("\nPara hazirlaniyor");
        rpt('.', (int)i / 4);
    }
    printf(Reset);

    if (para > 31)
        para = 31;
    char mainStr[] = "fsutil file createnew \"ROBLOX_PARA_";
    strcat(mainStr, isim);

    for (int i = 0; i <= para; i++)
    {
        char mainStr2[59];
        strcpy(mainStr2,mainStr);
        
        char istr[2];
        sprintf(istr, "%d", i);
        strcat(mainStr2, istr);
        strcat(mainStr2, "\" 1000");
        system(mainStr2);
    }

    printf("Paran hazir genc adam!\n");

    return 0;
}
