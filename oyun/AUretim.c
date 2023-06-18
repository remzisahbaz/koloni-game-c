#include <malloc.h>
#include "AUretim.h"

AUretim* AUretimOlustur() {
    AUretim* auretim = (AUretim*)_alloca(sizeof(AUretim));
    // AUretim yapısının oluşturulması ve ayarlanması
    return auretim;
}
