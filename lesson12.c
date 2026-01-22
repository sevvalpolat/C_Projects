/*
 *Project: Integer Square Root Checker.
 *Author: Sevval
 *Description: Check if the Square Root Is an Integer.
 */

#include <stdio.h>
#include <math.h>
void checkSquareRootInteger() {
    int number  squareRoot;

    printf("Enter a positive number:");
    scanf("%d", &number);
    if (number < 0) {
        printf("Please do not do this\n");
    }else {
        squareRoot=sqrt(number);
        if (squareRoot*squareRoot ==number) {
            printf("square root of %d is an integer\n", number);
            printf("square root of %d\n",squareRoot);
        }else {
            printf("No it is not\n");
        }
    }
}

//----------------------------------------------------------------------------------------

/*
 *Project:Phone Bill Calculator
 *Aouthor:Sevval
 *Description:Calculates the total call cost based on user input (duration in minutes).
 * Applies a base rate for the first 4 minutes and an extra charge for each additional minute.
 */

#include <stdio.h>
void calculatePhoneBill(){

  int konuşulanDakika;
  float toplamÜcret;
  printf("Lütfen telefonda konuşulan süreyi giriniz:\n");
  scanf("%d",&konuşulanDakika);

 if (konuşulanDakika < 0) {
    printf("Hatali giris! Sure negatif olamaz.\n");
 }else {
    if (konuşulanDakika <=4 ) {
        toplamÜcret=0.30;
    }else {
        toplamÜcret = (konuşulanDakika - 4)* 0.07 + 0.30 ;
    }
    printf("Ücret:%.2f tl\n",toplamÜcret);
}

}