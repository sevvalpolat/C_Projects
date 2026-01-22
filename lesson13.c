/*
 * Project: Triangle Type Determiner
 * Author:Sevval
 * Description: Reads three angles from the user and determines the type of the triangle.
 * It checks for validity (sum must be 180) and classifies it as Equilateral, Isosceles, or Scalene.
 */

#include <stdio.h>

void determineTriangleType (){
    float aci1, aci2, aci3;

    printf("Lütfen üçgenin 3 açısını sırasıyla girin:\n");
    scanf("%f %f %f", &aci1, &aci2, &aci3);

    if (aci1 + aci2 + aci3 !=180) {
        printf("İç açıları toplamı 180 olmalıdır!");
    }else {
        if (aci1 == 60 && aci2 == 60 && aci3 == 60) {
            printf("Eşkenar Üçgen");
        } else if (aci1 == aci2 || aci1 == aci3 || aci2 == aci3) {
            printf("İkizkenar Üçgen");
        } else {
            printf("Çeşitkenar Üçgen");
        }
    }
}

//----------------------------------------------------------------------------------

/*
 * Project: Character Type Checker
 * Author: Sevval
 * Description: Checks if the entered character is a letter.
 * If it is a letter, it determines whether it is Uppercase or Lowercase.
 */
#include <stdio.h>

void  checkCharacterStatus(){
    char myChareacter;

    printf("Enter a character:");
    scanf("%c", &myChareacter);

    if ( (myChareacter >= 'A') && (myChareacter <= 'Z')) {
        printf("%c is an uppercase letter\n",myChareacter);
    }else if ((myChareacter >= 'a') && (myChareacter <= 'z')) {
        printf("%c is a lowercase letter\n",myChareacter);
    }else {
        printf("%c is not a letter\n",myChareacter);
    }
}