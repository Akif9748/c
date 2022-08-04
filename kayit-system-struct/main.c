#include <stdio.h>
#include <string.h>
struct ogrenci
{
    char *ad;
    int not ;
};

struct ogrenci ogrenciler[20];
int sonNumara = 0;
int main()
{

    int islem;
    printf("* Yapmam icin bir islem secsene\n1- kayit\n2- goruntule\n3- herkesi goruntule");
    scanf("%d", &islem);
    switch (islem)
    {
    case 1:
    {
        struct ogrenci yeniOgrenci;
        char isim[20];
        printf("Kayit icin ismini yaz:    ");
        scanf("%s", isim);
        char *ad = isim;
        printf("\nAdin:%s", ad);
        yeniOgrenci.ad = ad;

        ogrenciler[sonNumara] = yeniOgrenci;
        break;
    }
    case 2:
    {

        break;
    }
        case 3:
    {

        break;
    }
    default:
        printf("Bizde boyle bir islem yok ki!");
        break;
    }
}
