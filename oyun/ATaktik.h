//
// Created by experilabs on 19.05.2023.
//

#ifndef OYUN_ATAKTIK_H
#define OYUN_ATAKTIK_H
#include "Taktik.h"

typedef struct {
    Taktik base;
    // ATaktik'e özgü ekstra özellikler
} ATaktik;

ATaktik* ATaktikOlustur();


#endif //OYUN_ATAKTIK_H
