//
// Created by experilabs on 19.05.2023.
//

#ifndef OYUN_BURETIM_H
#define OYUN_BURETIM_H
#include "Uretim.h"

typedef struct {
    Uretim uretim;
    // BUretim'e özgü ek özellikler
} BUretim;

BUretim* BUretimOlustur();
void BUretimYokEt(BUretim* bUretim);
int BUretimUret(BUretim* bUretim);

#endif //OYUN_BURETIM_H
