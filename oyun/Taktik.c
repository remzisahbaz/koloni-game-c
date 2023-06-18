#include <malloc.h>
#include "Taktik.h"

Taktik* TaktikOlustur() {
    Taktik* taktik = (Taktik*)malloc(sizeof(Taktik));
    // Taktik yapısının oluşturulması ve ayarlanması
    return taktik;
}

int Savas( Koloni * deger1, Koloni * deger2) {
    // Savaş işlemleri ve sonucun döndürülmesi
    if (deger1->populasyon > deger2->populasyon) {
        return 1;
    } else if (deger1->populasyon < deger2->populasyon) {
        return 2;
    } else {
        return 0;
    }
}
