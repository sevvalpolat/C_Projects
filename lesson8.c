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

