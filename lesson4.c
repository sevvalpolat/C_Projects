/*
* Project: Sum of Digits (Function Only)
 * Author: Sevval
 * Description: Calculates the sum of digits for a 4-digit number.
 * Note: This file contains only the function definition.
 */

#include <stdio.h>

void sumOfDigits() {
    int number, sum = 0;

    printf("Please enter a 4-digit number: ");
    scanf("%d", &number);

    // 1. Basamak (Birler) - 1st Digit
    sum += number % 10;
    number = number / 10;

    // 2. Basamak (Onlar) - 2nd Digit
    sum += number % 10;
    number = number / 10;

    // 3. Basamak (Yüzler) - 3rd Digit
    sum += number % 10;
    number = number / 10;

    // 4. Basamak (Binler) - 4th Digit
    sum += number;

    printf("Sum of the digits: %d\n", sum);
}
//---------------------------------------------------------------------------
/*
 * Project: Ideal Gas Pressure Calculator
 * Author: Sevval
 * Description: Calculates gas pressure.
 * FORMULA: P = (n * R * T) / V
 * (Pressure = Moles * Constant R * Temperature / Volume)
 */

#include <stdio.h>

void calculateGasPressure() {
    /* SCIENTIFIC CONSTANT
       R = 0.082 L.atm/mol.K (Ideal Gas Constant)
    */
    const float R = 0.082;

    // Variables (Volume, Moles, Temperature, Pressure)
    float volume, numberOfMoles, temperature, pressure;

    printf("--- Ideal Gas Pressure Calculator ---\n");

    // 1. INPUTS
    printf("Enter the volume (Liters): ");
    scanf("%f", &volume);

    printf("Enter the number of moles (n): ");
    scanf("%f", &numberOfMoles);

    printf("Enter the temperature (Kelvin): ");
    scanf("%f", &temperature);

    // ----------------------------------------------
    // DEFINING THE FORMULA (Formulun Tanimlanmasi)
    // Formula: P = (n * R * T) / V
    // ----------------------------------------------
    pressure = (numberOfMoles * R * temperature) / volume;

    // OUTPUT
    printf("----------------------------------------\n");
    printf("Calculated Pressure: %.4f atm\n", pressure);
    printf("----------------------------------------\n");
}