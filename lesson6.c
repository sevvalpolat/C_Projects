/*
* Project: Digit Finder
 * Author: Sevval
 * Description: Extracts the ones and tens digits of a number.
 */

#include <stdio.h>

void findDigits() {
    int number;
    int ones, tens;

    printf("--- Digit Finder Program ---\n");
    printf("Please enter a number: ");
    scanf("%d", &number);

    // ------------------------------------------------
    // CALCULATION (Hesaplama)
    // ------------------------------------------------

    // 1. Ones Digit (Birler Basamagi)
    // Formula: Number % 10
    ones = number % 10;

    // 2. Tens Digit (Onlar Basamagi)
    // Formula: (Number % 100) / 10
    tens = (number % 100) / 10;

    // ------------------------------------------------
    // OUTPUT (Cikti)
    // ------------------------------------------------
    printf("----------------------------------------\n");
    printf("Original Number : %d\n", number);
    printf("Ones Digit      : %d\n", ones);
    printf("Tens Digit      : %d\n", tens);
    printf("----------------------------------------\n");
}

//----------------------------------------------------------------------------

/*
 * Project: Arithmetic Average Calculator
 * Author: Sevval
 * Description: Calculates the average of 4 float numbers entered in a single line.
 */

#include <stdio.h>

void calculateAverage() {
    // Variables for input numbers and results
    float n1, n2, n3, n4;
    float sum, average;

    printf("--- Arithmetic Average Calculator ---\n");

    // Input: Get 4 numbers in a single line
    // Ornek: 10.5 20.4 5.5 100
    printf("Enter 4 numbers separated by space: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // Calculation
    sum = n1 + n2 + n3 + n4;

    // Using 4.0f to ensure float division precision
    average = sum / 4.0f;

    // Output results with 2 decimal precision
    printf("----------------------------------------\n");
    printf("Numbers : %.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);
    printf("Sum     : %.2f\n", sum);
    printf("Average : %.2f\n", average);
    printf("----------------------------------------\n");
}