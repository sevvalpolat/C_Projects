/*
* Project: Min/Max Finder with Equality Check
 * Author: Sevval
 * Description: Checks for equality first, then finds min/max.
 */

#include <stdio.h>

void findMinMaxWithEquality() {
    int num1, num2, num3;
    int max, min;

    printf("--- Min/Max System (Equality Check) ---\n");
    printf("Enter 3 numbers separated by space: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("----------------------------------------\n");

    // Once ozel durumu kontrol ettim: Tum sayilar birbirine esit mi?
    // Mantigim su: num1, num2'ye esitse VE num2 de num3'e esitse hepsi aynidir.
    if (num1 == num2 && num2 == num3) {
        printf("Result: All numbers are EQUAL (%d)\n", num1);
    }
    // Eger sayilar esit degilse, asil kiyaslama islemine burada basliyorum.
    else {

        // --- EN BUYUGU NASIL BULDUM? ---
        // num1 hem num2'den hem de num3'ten buyuk (veya esit) ise max odur dedim.
        if (num1 >= num2 && num1 >= num3) {
            max = num1;
        }
        // Degilse, sansimi num2 ile denedim; num2 digerlerinden buyuk mu?
        else if (num2 >= num1 && num2 >= num3) {
            max = num2;
        }
        // Yukaridakilerin hicbiri degilse, geriye tek secenek num3 kaliyor.
        else {
            max = num3;
        }

        // --- EN KUCUGU NASIL BULDUM? ---
        // Ayni mantigi bu sefer 'kucuktur' operatoruyle en kucugu bulmak icin kurdum.
        if (num1 <= num2 && num1 <= num3) {
            min = num1;
        }
        else if (num2 <= num1 && num2 <= num3) {
            min = num2;
        }
        else {
            min = num3;
        }

        printf("Result: The Largest Number is %d\n", max);
        printf("Result: The Smallest Number is %d\n", min);
    }

    printf("----------------------------------------\n");
}

//-------------------------------------------------------------------------------------------------

/*
 * Project: Min/Max Finder (Method 2)
 * Author: Sevval
 * Description: Finds min/max efficiently without redundant checks at the start.
 */

#include <stdio.h>

void findMinMaxOptimized() {
    int num1, num2, num3;
    int max, min;

    printf("--- Min/Max Finder (Method 2) ---\n");
    printf("Enter 3 numbers separated by space: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("---------------------------------\n");

    // ADIM 1: Varsayim (Assumption)
    // Burada ilk sayiyi gecici olarak 'lider' (hem max hem min) ilan ettim.
    // Bu yontem sayesinde bastan karmasik "esit mi degil mi" kontrolleri yapip
    // islemciyi bosuna yormuyorum.
    max = num1;
    min = num1;

    // ADIM 2: Karsilastirma
    // Ikinci sayiyi elimdeki liderlerle kiyasliyorum.
    if (num2 > max) max = num2;
    if (num2 < min) min = num2;

    // Ucuncu sayiyi kiyasliyorum.
    if (num3 > max) max = num3;
    if (num3 < min) min = num3;

    // ADIM 3: Final Kontrol (Optimize Edilmis Mantik)
    // Bastan uzun uzun && (ve) operatorleri kullanmak yerine sunu dusundum:
    // Eger buldugum en buyuk sayi (max) ile en kucuk sayi (min) birbirine esitse,
    // matematiksel olarak girilen tum sayilar zaten esittir.
    if (max == min) {
        printf("Result: All numbers are EQUAL (%d)\n", max);
    } else {
        printf("Result: The Largest Number is %d\n", max);
        printf("Result: The Smallest Number is %d\n", min);
    }

    printf("---------------------------------\n");
}