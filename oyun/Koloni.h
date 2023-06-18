//
// Created by experilabs on 19.05.2023.
//

#ifndef OYUN_KOLONI_H
#define OYUN_KOLONI_H

#include "Taktik.h"
#include "Uretim.h"

typedef struct {
    char sembol;
    int populasyon;
    int yemekStogu;
    Taktik* taktik;
    Uretim* uretim;
} Koloni;

Koloni* KoloniOlustur(char sembol, int populasyon, Taktik* taktik, Uretim* uretim);
void KoloniYokEt(Koloni* koloni);
void KoloniSavas(Koloni* koloni1, Koloni* koloni2);
void KoloniUretim(Koloni* koloni);
void KoloniPopulasyonArttir(Koloni* koloni);
void KoloniYemekStoguAzalt(Koloni* koloni);

#endif //OYUN_KOLONI_H
