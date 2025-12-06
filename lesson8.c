/*
* Project: Number Comparator
 * Author: Sevval
 * Description: Compares two integers and prints the relationship.
 */

#include <stdio.h>

void compareNumbers() {
    int num1, num2;

    printf("--- Number Comparison Program ---\n");
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &num1, &num2);

    printf("----------------------------------------\n");

    // 1. Durum: Birinci sayi buyukse
    if (num1 > num2) {
        // Degisken ismini degil, icindeki degeri yazdiriyoruz (%d)
        printf("Result: %d is greater than %d\n", num1, num2);
    }
    // 2. Durum: Ikinci sayi buyukse
    else if (num2 > num1) {
        printf("Result: %d is greater than %d\n", num2, num1);
    }
    // 3. Durum: Esitse
    else {
        printf("Result: Both numbers are equal (%d = %d)\n", num1, num2);
    }

    printf("----------------------------------------\n");
}

//-------------------------------------------------------------------------------

/*
 * Project: Book Order & Discount Calculator
 * Author: Sevval
 * Description: Calculates total price based on order quantity and discount rates.
 * Logic:
 * - >= 60 books: %30 Discount
 * - 30-59 books: %20 Discount
 * - 10-29 books: %12 Discount
 * - < 10 books : %1 Discount
 */

#include <stdio.h>

void calculateBookOrder() {
    // Variables
    int bookPrice = 20;     // Birim fiyat
    int orderQuantity;      // Siparis adedi

    // Fiyatlar ondalikli olabilir
    float discountRate;     // Indirim orani
    float noDiscountPrice;  // Indirimsiz tutar
    float discountAmount;   // Indirim miktari (TL)
    float totalSum;         // Son odenecek tutar

    printf("--- Book Order System ---\n");
    printf("Unit Price: %d TL\n", bookPrice);

    // Input
    printf("How many books would you like to order? (Kac adet siparis?): ");
    scanf("%d", &orderQuantity);

    // Decision Making (Indirim Oranini Belirleme)
    if (orderQuantity >= 60) {
        discountRate = 0.30; // %30
    } else if (orderQuantity >= 30) {
        discountRate = 0.20; // %20
    } else if (orderQuantity >= 10) {
        discountRate = 0.12; // %12
    } else {
        discountRate = 0.01; // %1 (Sembolik indirim)
    }

    // Calculations
    noDiscountPrice = orderQuantity * bookPrice;
    discountAmount = noDiscountPrice * discountRate;
    totalSum = noDiscountPrice - discountAmount;

    // Output
    printf("----------------------------------------\n");
    printf("Raw Price (Indirimsiz) : %.2f TL\n", noDiscountPrice);
    printf("Discount Amount (Indirim): %.2f TL (Rate: %.2f)\n", discountAmount, discountRate);
    printf("Total Amount (Odenecek)  : %.2f TL\n", totalSum);
    printf("----------------------------------------\n");
}
