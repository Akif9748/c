#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define mevcut 20

struct ogrenci
{
    char ad[20];
    int not ;
};

struct ogrenci ogrenciler[mevcut];
int sonNumara = 0;
int kytsys()
{

    int islem;
    printf("\nYapmam icin bir islem secsene\n1- kayit\n2- goruntule\n3- herkesi goruntule\n4- cik\n>>> ");
    scanf("%d", &islem);
    switch (islem)
    {
    case 1:
    {
        struct ogrenci yeniOgrenci;
        char isim[20];
        printf("Kayit icin ismini yaz:\n>>> ");
        scanf("%s", isim);

        strcpy(yeniOgrenci.ad, isim);
        yeniOgrenci.not = (int)(((double)rand() / RAND_MAX) * (100 - 1) + 1);
        printf("%d", sonNumara);
        ogrenciler[sonNumara++] = yeniOgrenci;

        printf("\nKayit basarili! Adin: %s\n", isim);
        return 0;

        break;
    }
    case 2:
    {
        int kim;
        printf("\nOgrenci Numarani Gir:\n>>> ");
        scanf("%d", &kim);

        struct ogrenci eskiOgrenci = ogrenciler[kim];

        printf("\nAdin: %s\nNotun: %d", eskiOgrenci.ad, eskiOgrenci.not );
        return 0;
    }
    case 3:
    {
        for (int i = 0; i < sonNumara; i++)

            printf("\nNumara: %d\nAdin: %s\nNotun: %d", i, ogrenciler[i].ad, ogrenciler[i].not );

        return 0;
    }
    case 4:
    {
        return 1;
    }
    default:
        printf("Bizde boyle bir islem yok ki!");
        return 0;
    }
}

int main()
{
    while (!kytsys())
        ;
}
