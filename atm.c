#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define MAX_CEKILEBILIR_PARA 1000
#define MAX_YATIRILABILIR_PARA 250000

int Islemler(int hesapno, int islemID)
{
    switch(islemID)
    {
        case 4:
        {
            printf("[SİSTEM]: Sistemden çıkış yapılıyor...\n");
            printf("[UYARI]: Kartınızı hazneden teslim alınız!\n");
            printf("[SİSTEM]: Sistem çıkışı yapıldı!\n");
            return 1;
            break;
        }
    }
    return 1;
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    system("cls");
    system("color 4C");
    int hesapno, islemID;
    printf("[SİSTEM]: Hesap numaranızı giriniz: ");
    scanf("%d", &hesapno);
    while(hesapno < 10000 || hesapno > 99999)
    {
        printf("[HATA]: Hatalı hesap numarası girdiniz!\n");
        printf("[BİLGİ]: Bankamıza ait hesap numaraları 10000-99999 arasında olmalıdır!\n");
        printf("[SİSTEM]: Hesap numaranızı giriniz: ");
        scanf("%d", &hesapno);
    }
    printf("1 - Para Çekme\n");
    printf("2 - Para Yatırma\n");
    printf("3 - Para Transferi\n");
    printf("4 - Sistemden Çıkış\n");
    printf("[SİSTEM]: Yapmak istediğiniz işlemi seçiniz: ");
    scanf("%d", &islemID);
    while(islemID < 1 || islemID > 4)
    {
        printf("[HATA]: Hatalı işlem ID girdiniz!");
        printf("[BİLGİ]: İşlem ID'lerimiz 1-4 arasındadır!");
        printf("1 - Para Çekme\n");
        printf("2 - Para Yatırma\n");
        printf("3 - Para Transferi\n");
        printf("4 - Sistemden Çıkış\n");
        printf("[SİSTEM]: Yapmak istediğiniz işlemi seçiniz: ");
        scanf("%d", &islemID);
    }
    Islemler(hesapno, islemID);
}
