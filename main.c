#include <stdio.h>
#include <stdlib.h>

int main()
{
    int BuyukKarakterSayisi=0;
    char karakter;
    printf("Metni giriniz:(Girdiginiz metnin sonuna nokta koyunuz.)");
    scanf("%c",&karakter);
    while(karakter !='.'){
        if((karakter>='A')&&(karakter<='Z')){
            BuyukKarakterSayisi++;
        }
        scanf("%c",&karakter);
    }
    printf("Buyuk harf sayisi:%d",BuyukKarakterSayisi);
    return 0;
}
