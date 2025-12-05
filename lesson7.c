/*
* Project: Number Properties Checker
 * Author: Sevval
 * Description: Checks if a number is positive, negative, or zero.
 */

#include <stdio.h>

void checkNumberProperties() {
    int number;

    printf("--- Number Checker Program ---\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("----------------------------------------\n");

    // 1. Durum: Sayı Pozitif mi?
    if (number > 0) {

        // --- İÇ İÇE (NESTED) IF BAŞLANGICI ---
        // Sadece pozitifse 100 olup olmadığına bakıyoruz
        if (number == 100) {
            printf("Result: The number is INCREDIBLE (100)!\n");
        } else {
            printf("Result: The number is not incredible.\n");
        }
        // --- İÇ İÇE IF BİTİŞİ ---

        // Burası hala "number > 0" bloğunun içindedir.
        // Sayı 100 olsa da olmasa da, pozitif olduğu için bunu yazar.
        printf("Type  : The value is a positive number.\n");

    } // "if (number > 0)" burada bitti.

    // 2. Durum: Sayı Negatif mi?
    else if (number < 0) {
        printf("Type  : The value is a negative number.\n");
    }

    // 3. Durum: Hiçbiri değilse (Sıfır)
    else {
        printf("Type  : The number is Zero (0).\n");
    }

    printf("----------------------------------------\n");
}

//---------------------------------------------------------------------------------------------

/*
 * Project: Exam Status Checker (Ternary Operator)
 * Author: Sevval
 * Description: Uses the conditional operator (? :) to check pass/fail status.
 * Logic: (Condition) ? (Action if True) : (Action if False);
 */

#include <stdio.h>

void checkExamStatus() {
    int score;

    printf("--- Exam Status Checker ---\n");
    printf("Please enter your score: ");
    scanf("%d", &score);

    printf("----------------------------------------\n");

    // TERNARY OPERATOR (Uclu Operator)
    // If score >= 60, print "Passed", otherwise print "Failed".

    (score >= 60) ? printf("Result: You PASSED the exam!\n")
                  : printf("Result: You FAILED the exam.\n");

    printf("----------------------------------------\n");
}