#include <malloc.h>
#include <stdio.h>
#include "Oyun.h"

Oyun* OyunOlustur(int turSayisi, int koloniSayisi) {
    Oyun* oyun = (Oyun*)malloc(sizeof(Oyun));
    oyun->turSayisi = turSayisi;
    oyun->koloniSayisi = koloniSayisi;
    oyun->koloniler = (Koloni**)malloc(sizeof(Koloni*) * koloniSayisi);
    // Oyun başlangıç ayarları yapılabilir
    return oyun;
}

void OyunYokEt(Oyun* oyun) {
    // Oyuna ait bellek alanlarının serbest bırakılması
    free(oyun->koloniler);
    free(oyun);
}

void OyunBaslat(Oyun* oyun) {
    for (int tur = 1; tur <= oyun->turSayisi; tur++) {
        OyunTurunuOyna(oyun, tur);
    }
    OyunSonucuGoster(oyun);
}

void OyunTurunuOyna(Oyun* oyun, int tur) {
    printf("Tur Sayisi: %d\n", tur);
    printf("Koloni    Populasyon    Yemek_Stogu    Kazanma    Kaybetme\n");
    for (int i = 0; i < oyun->koloniSayisi; i++) {
        Koloni* koloni = oyun->koloniler[i];
        printf("%c         %d             %d            --          --\n", koloni->sembol, koloni->populasyon, koloni->yemekStogu);
        KoloniUretim(koloni);
        KoloniPopulasyonArttir(koloni);
        KoloniYemekStoguAzalt(koloni);
        for (int j = 0; j < oyun->koloniSayisi; j++) {
            if (i != j) {
                Koloni* rakipKoloni = oyun->koloniler[j];
                KoloniSavas(koloni, rakipKoloni);
            }
        }
    }
}

void OyunSonucuGoster(Oyun* oyun) {
    printf("Tur Sayisi: %d\n", oyun->turSayisi);
    printf("Koloni Populasyon Yemek_Stogu Kazanma Kaybetme\n");
    for (int i = 0; i < oyun->koloniSayisi; i++) {
        Koloni* koloni = oyun->koloniler[i];
        printf("%c       %d          %d         --       --\n", koloni->sembol, koloni->populasyon, koloni->yemekStogu);
    }
}
