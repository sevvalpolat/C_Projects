// --- DERS 3: Atama ve Bitwise Operatorleri ---
// Bu fonksiyon, atama ve bit duzeyindeki islemleri orneklendirir.

void lesson3_atama_ve_bitwise() {
    int number;

    printf("\n--- DERS 3: ATAMA VE BITWISE ISLEMLERI ---\n");

    // 1. Bitwise AND (&=) - VE Islemi
    number = 5;
    number &= 9;
    printf("1. Bitwise AND (5 &= 9) Sonuc: %d \n", number);


    // 2. Bitwise OR (|=) - VEYA Islemi
    number = 5;
    number |= 9;
    printf("2. Bitwise OR (5 |= 9)  Sonuc: %d \n", number);


    // 3. Modulo Assignment (%=) - Mod Alma
    number = 36;
    number %= 7;
    // NOT: printf icinde tek % yazarsak bilgisayar kod bekler.
    // Ekrana sadece yazi olarak '%' isareti basmak icin '%%' yazariz.
    printf("3. Modulo (36 %%= 7)    Sonuc: %d \n", number);


    // 4. Bitwise XOR (^=) - OZEL VEYA (YA DA)
    number = 14;
    number ^= 24;
    printf("4. Bitwise XOR (14 ^= 24) Sonuc: %d \n", number);


    // 5. Left Shift (<<=) - Sola Kaydirma
    number = 5;
    number <<= 2;
    printf("5. Left Shift (5 <<= 2)   Sonuc: %d \n", number);


    // 6. Right Shift (>>=) - Saga Kaydirma
    number = 10;
    number >>= 1;
    printf("6. Right Shift (10 >>= 1) Sonuc: %d \n", number);
}