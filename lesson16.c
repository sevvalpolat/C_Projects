/*
* Project: Days in a Month Calculator
 * Author: Sevval
 * Description: Takes a month number from the user and outputs the number of days
 * in that month using a switch-case statement with fall-through logic.
 */

#include <stdio.h>
#include <stdlib.h>

void checkDaysInMonth() {
    int monthNumber;

    printf("Which month: ");
    scanf("%d", &monthNumber);

    switch (monthNumber) {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("There are 30 days in the %dth month\n", monthNumber);
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("There are 31 days in the %dth month\n", monthNumber);
            break;
        case 2:
            printf("There are 28 or 29 days in the %dth month\n", monthNumber);
            break;
        default:

            printf("There is no %dth month\n", monthNumber);
    }
}
//------------------------------------------------------------------------------------------------

/*
 * Project: Basic While Loop
 * Author: Sevval
 * Description: Demonstrates a simple while loop that prints a message
 * exactly five times by incrementing a counter variable by 1.
 */

#include <stdio.h>
#include <stdlib.h>

void printMessageBasic() {
    int i = 1;
    while (i <= 5) {
        printf("C is a fantastic language\n");
        i++;
    }
}
//-------------------------------------------------------------------------------------------------

/*
 * Project: While Loop with Multiplication
 * Author: Sevval
 * Description: Demonstrates a while loop where the counter increments
 * by multiplying itself by 5 in each iteration, stopping before it reaches 25.
 */

#include <stdio.h>
#include <stdlib.h>

void printMessageMultiplied() {
    int i = 1;
    while (i < 25) {
        printf("C is a fantastic language\n");
        i *= 5;
    }
}