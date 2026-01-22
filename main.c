#include <stdio.h>

int main (){
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
    return 0;
}