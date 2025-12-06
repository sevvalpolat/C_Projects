/*
 * Project: Triangle Angle Classifier (Smart Logic)
 * Author: Sevval
 * Description: Identifies triangle angles by isolating the longest side efficiently.
 */

#include <stdio.h>

void checkTriangleType() {
    int a, b, c;
    int max, x, y; // max: En uzun kenar, x ve y: Diger kisa kenarlar

    printf("--- Triangle Angle System ---\n");
    printf("Enter 3 side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("-----------------------------\n");

    // ADIM 1: Ucgen Esitsizligi Kontrolu
    // Kural: Herhangi iki kenarin toplami, ucuncuden buyuk OLMALIDIR.
    // Eger bu sart saglanmazsa zaten ortada bir ucgen yoktur.
    if (a + b > c && a + c > b && b + c > a) {

        // A Kenari en buyukse:
        if (a >= b && a >= c) {
            max = a;
            x = b;
            y = c;
        }
        // B Kenari en buyukse:
        else if (b >= a && b >= c) {
            max = b;
            x = a;
            y = c;
        }
        // C Kenari en buyukse (veya hepsi esitse buraya duser ki sorun degil):
        else {
            max = c;
            x = a;
            y = b;
        }

        // ADIM 3: Pisagor Teoremi ile Kiyaslama
        // En uzunun karesi ile digerlerinin kareleri toplamini kiyasliyorum.

        // Islem kalabaligi olmasin diye kareleri degiskenlere aldim
        int maxSq = max * max;
        int othersSq = x * x + y * y;

        if (maxSq == othersSq) {
            printf("Result: Right Triangle (Dik Acili)\n");
        }
        else if (maxSq < othersSq) {
            printf("Result: Acute Triangle (Dar Acili)\n");
        }
        else {
            printf("Result: Obtuse Triangle (Genis Acili)\n");
        }

    }
    // Ucgen olma sarti saglanmadiysa:
    else {
        printf("Error: These sides CANNOT form a triangle!\n");
    }

    printf("-----------------------------\n");
}

//------------------------------------------------------------------------

/*
 * Project: Four-Digit Special Number Detector
 * Author: Sevval
 * Description: Checks if a number satisfies the (PartA + PartB)^2 = Number property.
 */

#include <stdio.h>

void checkSpecialNumber() {
    int number;
    int firstPart, secondPart; // Sayinin ilk iki ve son iki hanesi
    int sum, squaredSum;       // Toplam ve karesi

    printf("--- Special Number Detector ---\n");
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    printf("-------------------------------\n");

    // ADIM 1: Basamak Kontrolu (Validation)
    // Girilen sayi gercekten 4 basamakli mi? (1000 ile 9999 arasinda mi?)
    if (number < 1000 || number > 9999) {
        printf("Error: Please enter a valid 4-digit number!\n");
    }
    else {
        // ADIM 2: Sayiyi Ortadan Ikiye Bolme (Math Logic)

        // Ornek Sayi: 3025
        // 100'e bolersek tam kismi aliriz -> 30 (Ilk iki hane)
        firstPart = number / 100;

        // 100'e bolumunden kalani alirsak -> 25 (Son iki hane)
        secondPart = number % 100;

        // ADIM 3: Toplama ve Kare Alma
        sum = firstPart + secondPart; // 30 + 25 = 55
        squaredSum = sum * sum;       // 55 * 55 = 3025

        // ADIM 4: Karsilastirma
        if (squaredSum == number) {
            printf("Result: %d is a SPECIAL NUMBER!\n", number);
            printf("Logic: (%d + %d)^2 = %d\n", firstPart, secondPart, squaredSum);
        } else {
            printf("Result: %d is NOT a special number.\n", number);
            printf("Info: Calculated value was %d, but number is %d\n", squaredSum, number);
        }
    }

    printf("-------------------------------\n");
}