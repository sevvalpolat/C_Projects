/*
* Project: Basic Calculator
 * Author: Sevval
 * Description: Performs basic arithmetic operations (+, -, *, /) based on user input.
 * Validates the operator before asking for numbers to ensure a better user experience.
 */

#include <stdio.h>
#include <stdlib.h>

void executeCalculator() {
    char myOperator;
    float number1, number2;

    printf("Choose operator (+, -, *, /): ");
    scanf(" %c", &myOperator);

    if (myOperator != '+' && myOperator != '-' && myOperator != '*' && myOperator != '/') {
        printf("Error: You entered the wrong operator!\n");
    } else {
        printf("Enter first number: ");
        scanf("%f", &number1);

        printf("Enter second number: ");
        scanf("%f", &number2);

        printf("\nOperator = %c\nNumber 1 = %.2f\nNumber 2 = %.2f\n", myOperator, number1, number2);

        switch (myOperator) {
            case '/':
                if (number2 != 0)
                    printf("Result = %.2f\n", number1 / number2);
                else
                    printf("Error: Division by zero!\n");
                break;
            case '+':
                printf("Result = %.2f\n", number1 + number2);
                break;
            case '-':
                printf("Result = %.2f\n", number1 - number2);
                break;
            case '*':
                printf("Result = %.2f\n", number1 * number2);
                break;
        }
    }
}
//------------------------------------------------------------------------
/*
 * Project: Even or Odd Determiner
 * Author: Sevval
 * Description: Takes an integer from the user and determines
 * whether it is even or odd using the modulo operator within a switch-case.
 */

#include <stdio.h>
#include <stdlib.h>

void checkEvenOrOdd() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0:
            printf("%d is an even number\n", number);
            break;
        case 1:
        case -1: // Negatif tek sayılar için modulo -1 dönebilir, bu yüzden eklendi.
            printf("%d is an odd number\n", number);
            break;
    }
}
//-------------------------------------------------------------------------------------------------

/*
 * Project: Vowel or Consonant Checker
 * Author: Sevval
 * Description: Checks if an input character is a lowercase vowel.
 * If not, it defaults to printing that it's a consonant or not a letter.
 * Demonstrates the "fall-through" feature of switch-case statements.
 */

#include <stdio.h>

void checkVowel() {
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    switch (letter) {
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i':
            printf("%c is a vowel\n", letter);
            break;
        default:
            printf("%c is a consonant\n", letter);
            printf(" or not a letter\n\n");
    }
}