#include <malloc.h>
#include "Koloni.h"

Koloni* KoloniOlustur(char sembol, int populasyon, Taktik* taktik, Uretim* uretim) {
    Koloni* koloni = (Koloni*)malloc(sizeof(Koloni));
    koloni->sembol = sembol;
    koloni->populasyon = populasyon;
    koloni->yemekStogu = populasyon * populasyon;
    koloni->taktik = taktik;
    koloni->uretim = uretim;
    return koloni;
}

void KoloniYokEt(Koloni* koloni) {
    // Koloniye ait bellek alanlarının serbest bırakılması
    free(koloni);
}

void KoloniSavas(Koloni* koloni1, Koloni* koloni2) {
    // Koloniler arasında savaş gerçekleştirme
    // Savaş sonucunda popülasyonlar ve yemek stoğu güncellenir

    Taktik *ptr ;
    int kazanan = ptr->Savas(koloni1, koloni2);
    if (kazanan == 1) {
        // koloni1 kazandı
        int fark = koloni1->populasyon - koloni2->populasyon;
        int azalma = fark * 0.1; // %10 azalma
        koloni1->populasyon -= azalma;
        koloni2->populasyon += azalma;
        int yemekTransferi = koloni1->yemekStogu * 0.1; // %10 yemek transferi
        koloni1->yemekStogu -= yemekTransferi;
        koloni2->yemekStogu += yemekTransferi;
    } else if (kazanan == 2) {
        // koloni2 kazandı
        int fark = koloni2->populasyon - koloni1->populasyon;
        int azalma = fark * 0.1; // %10 azalma
        koloni2->populasyon -= azalma;
        koloni1->populasyon += azalma;
        int yemekTransferi = koloni2->yemekStogu * 0.1; // %10 yemek transferi
        koloni2->yemekStogu -= yemekTransferi;
        koloni1->yemekStogu += yemekTransferi;
    } else {
        // berabere
        if (koloni1->populasyon > koloni2->populasyon) {
            koloni1->populasyon += koloni2->populasyon;
            koloni2->populasyon = 0;
            koloni1->yemekStogu += koloni2->yemekStogu;
            koloni2->yemekStogu = 0;
        } else if (koloni1->populasyon < koloni2->populasyon) {
            koloni2->populasyon += koloni1->populasyon;
            koloni1->populasyon = 0;
            koloni2->yemekStogu += koloni1->yemekStogu;
            koloni1->yemekStogu = 0;
        } else {
            // Popülasyonlar eşit, rastgele biri kazanır
            int rastgele = rand() % 2; // 0 veya 1
            if (rastgele == 0) {
                koloni1->populasyon += koloni2->populasyon;
                koloni2->populasyon = 0;
                koloni1->yemekStogu += koloni2->yemekStogu;
                koloni2->yemekStogu = 0;
            } else {
                koloni2->populasyon += koloni1->populasyon;
                koloni1->populasyon = 0;
                koloni2->yemekStogu += koloni1->yemekStogu;
                koloni1->yemekStogu = 0;
            }
        }
    }
}

void KoloniUretim(Koloni* koloni) {
    // Koloniye ait üretim metodu
    int uretilen = koloni->uretim->Uret(koloni->uretim);
    koloni->yemekStogu += uretilen;
}

void KoloniPopulasyonArttir(Koloni* koloni) {
    // Koloni popülasyonunu %20 oranında artırma
    int artis = koloni->populasyon * 0.2; // %20 artış
    koloni->populasyon += artis;
}

void KoloniYemekStoguAzalt(Koloni* koloni) {
    // Koloni yemek stoğunu güncelleme
    koloni->yemekStogu *= 2;
}
