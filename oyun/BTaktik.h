//
// Created by experilabs on 19.05.2023.
//

#ifndef OYUN_BTAKTIK_H
#define OYUN_BTAKTIK_H

#include "Taktik.h"

typedef struct {
    Taktik super;
    // Add additional members specific to BTaktik
} BTaktik;

Taktik* BTaktikOlustur();

#endif //OYUN_BTAKTIK_H
