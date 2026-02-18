/*
* Project: Switch-Case Logic Example
 * Author: Sevval
 * Description: Demonstrates nested switch-case statements.
 * Assigns a value to 'z' based on the initial value of 'x' and optionally 'y'.
 */

#include <stdio.h>

void executeSwitchLogic() {
    int x, y, z;
    x = 7;
    y = 19;

    switch (x) {
        case 7:
            z = 19;
            break;
        default:
            switch (y) {
            case 12:
                    z = 10;
                    break;
            default:
                    z = -90;
            }
    }
    printf("%d\n", z);
}
//----------------------------------------------------------------------

/*
 * Project: Daily Sales Calculator
 * Author: Sevval
 * Description: Calculates cumulative sales based on the input day number.
 * Uses a switch-case structure without break statements to aggregate
 * products from the selected day down to the first day.
 */

#include <stdio.h>

void calculateDailySales() {
    int numberOfPructs, day;
    char *dayName;
    numberOfPructs = 0;
    day = 0;

    printf("Enter a number of day(1-7):");
    scanf("%d", &day);

    switch(day) {
        case 7:
            numberOfPructs += 25;
            if (day == 7) { dayName = "Pazar"; }
        case 6:
            numberOfPructs += 19;
            if (day == 6) { dayName = "Cumartesi"; }
        case 5:
            numberOfPructs += 15;
            if (day == 5) { dayName = "Cuma"; }
        case 4:
            numberOfPructs += 10;
            if (day == 4) { dayName = "Perşembe"; }
        case 3:
            numberOfPructs += 7;
            if (day == 3) { dayName = "Çarşamba"; }
        case 2:
            numberOfPructs += 5;
            if (day == 2) { dayName = "Salı"; }
        case 1:
            numberOfPructs += 2;
            if (day == 1) { dayName = "Pazartesi"; }
    }

    printf("%s gunu sonunda toplam %d urun satisi yapildi\n\n", dayName, numberOfPructs);
}