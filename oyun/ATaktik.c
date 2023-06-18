#include <malloc.h>
#include "ATaktik.h"

ATaktik* ATaktikOlustur() {
    ATaktik* ataktik = (ATaktik*)malloc(sizeof(ATaktik));
    // ATaktik yapısının oluşturulması ve ayarlanması
    return ataktik;
}
