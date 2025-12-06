/*
* Project: Parliament Quorum Checker
 * Author: Sevval
 * Description: Checks if the parliament meeting quorum is met.
 */

#include <stdio.h>

void checkParliamentQuorum() {
    int partyA, partyB, partyC; // Partilerin milletvekili sayilari
    int currentMPs;             // Su anki mevcut milletvekili sayisi (MP = Member of Parliament)
    const int TOTAL_SEATS = 600; // Meclisteki toplam koltuk sayisi (Sabit deger)

    printf("--- Parliament Quorum System ---\n");
    printf("Enter MP counts for 3 parties (separated by space): ");

    // Kullanicidan 3 partinin vekil sayisini sirayla aliyoruz
    scanf("%d %d %d", &partyA, &partyB, &partyC);

    printf("----------------------------------------\n");

    // Mevcut toplam vekil sayisini hesapliyoruz
    currentMPs = partyA + partyB + partyC;

    // Yeter sayi kontrolu: Mevcut sayi, toplamin yarisindan az mi?
    if (currentMPs < TOTAL_SEATS / 2) {
        printf("Result: Quorum not met, meeting adjourned.\n");
        // Kullaniciya gereken sayiyi ve mevcut bulunan sayiyi gosteriyoruz
        printf("Info: Required quorum is %d, but found %d.\n", TOTAL_SEATS / 2, currentMPs);
    }
    // Yeter sayi saglanmissa (300 veya daha fazla)
    else {
        printf("Result: Parliament is ready for the meeting.\n");
    }

    printf("----------------------------------------\n");
}
//--------------------------------------------------------------------------------------------------------------

/*
 * Project: Even/Odd Checker
 * Author: Sevval
 * Description: Determines if a number is even or odd.
 */

#include <stdio.h>

void checkEvenOdd() {
    int number;

    printf("--- Even/Odd Number System ---\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("----------------------------------------\n");

    // Modulo operatoru (%): Bolme isleminden kalani verir.
    // 1. Durum: Sayinin 2'ye bolumunden kalan 0 ise (Cift)
    if (number % 2 == 0) {
        printf("Result: %d is an EVEN number (Cift)\n", number);
    }
    // 2. Durum: Kalan 0 degilse (Tek)
    else {
        printf("Result: %d is an ODD number (Tek)\n", number);
    }

    printf("----------------------------------------\n");
}