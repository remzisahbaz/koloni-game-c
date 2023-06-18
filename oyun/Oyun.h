//
// Created by experilabs on 19.05.2023.
//

#ifndef OYUN_OYUN_H
#define OYUN_OYUN_H
#include "Koloni.h"

typedef struct {
    Koloni** koloniler;
    int koloniSayisi;
    int turSayisi;
} Oyun;

Oyun* OyunOlustur(int turSayisi, int koloniSayisi);
void OyunYokEt(Oyun* oyun);
void OyunBaslat(Oyun* oyun);
void OyunTurunuOyna(Oyun* oyun, int tur);
void OyunSonucuGoster(Oyun* oyun);

#endif //OYUN_OYUN_H
