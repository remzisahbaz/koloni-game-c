#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Oyun.h"
#include "ATaktik.h"
#include "BTaktik.h"
#include "AUretim.h"
#include "BUretim.h"

int main() {
    srand(time(NULL));

    // Oyun başlatma
    int turSayisi, koloniSayisi;
    printf("Tur sayisini girin: ");
    scanf("%d", &turSayisi);
    printf("Koloni sayisini girin: ");
    scanf("%d", &koloniSayisi);

    Oyun* oyun = OyunOlustur(turSayisi, koloniSayisi);

    for (int i = 0; i < koloniSayisi; i++) {
        char sembol;
        int populasyon;
        printf("Koloni %d icin sembol girin: ", i+1);
        scanf(" %c", &sembol);
        printf("Koloni %d icin populasyon girin: ", i+1);
        scanf("%d", &populasyon);

        Taktik* taktik;
        Uretim* uretim;

        if (i % 2 == 0) {
            taktik = (Taktik*)ATaktikOlustur();
            uretim = (Uretim*)AUretimOlustur();
        } else {
            taktik = (Taktik*)BTaktikOlustur();
            uretim = (Uretim*)BUretimOlustur();
        }

        Koloni* koloni = KoloniOlustur(sembol, populasyon, taktik, uretim);
        oyun->koloniler[i] = koloni;
    }

    OyunBaslat(oyun);

    OyunYokEt(oyun);

    return 0;
}
