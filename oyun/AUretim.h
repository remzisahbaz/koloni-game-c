//
// Created by experilabs on 19.05.2023.
//

#ifndef OYUN_AURETIM_H
#define OYUN_AURETIM_H
#include "Uretim.h"

typedef struct {
    Uretim base;
    // AUretim'e özgü ekstra özellikler
} AUretim;

AUretim* AUretimOlustur();

#endif //OYUN_AURETIM_H
