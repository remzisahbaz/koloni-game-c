#include <malloc.h>
#include "BUretim.h"

BUretim* BUretimOlustur() {
    BUretim* bUretim = (BUretim*)malloc(sizeof(BUretim));
    // BUretim'e özgü başlangıç ayarları yapılabilir
    return bUretim;
}

void BUretimYokEt(BUretim* bUretim) {
    // BUretim'in bellekten serbest bırakılması
    free(bUretim);
}

int BUretimUret(BUretim* bUretim) {
    // BUretim'e özgü üretim metodu
    // 1 ile 10 arasında bir tam sayı üretir ve döndürür
}
