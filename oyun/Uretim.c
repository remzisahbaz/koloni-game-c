#include <malloc.h>
#include "Uretim.h"

Uretim* UretimOlustur() {
    Uretim* uretim = (Uretim*)malloc(sizeof(Uretim));
    // Üretim yapısının oluşturulması ve ayarlanması
    return uretim;
}

int Uret(Uretim* uretim) {
    // Üretim işlemleri ve üretilen değerin döndürülmesi
    int uretilen = rand() % 10 + 1; // 1-10 arası rastgele bir tam sayı

    return uretilen;
}
