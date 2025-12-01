#include <stdio.h>

// --- ORNEK 1: Matematiksel Islemler ---
void ornek_matematik_islemleri() {
    int myNumber, myNumber2, mySum, mySubtraction, myMultiplication, myDivision;

    myNumber = 6;
    myNumber2 = 3;

    myDivision = myNumber / myNumber2;
    mySubtraction = myNumber - myNumber2;
    myMultiplication = myNumber * myNumber2;
    mySum = myNumber + myNumber2;

    printf("sum = %d\n", mySum);
    printf("multiplication = %d\n", myMultiplication);
    printf("division = %d\n", myDivision);
    printf("extraction = %d\n", mySubtraction);
    printf("myNumber = %d\n", myNumber);
    printf("myNumber2 = %d\n", myNumber2);
}

// --- ORNEK 2: Kullanicidan Veri Alma (Scanf) ---
/*
 scanf: Kullanıcıdan veya bir dosyadan girdi okumanıza ve
 bu girdiyi farklı veri türlerindeki değişkenlerde saklamanıza olanak tanır.
*/
void ornek_scanf_kullanimi() {
    int myNumber, myNumber2;
    printf("Enter two numbers:");
    scanf("%d %d", &myNumber, &myNumber2);
    printf("The numbers you entered are %d - %d", myNumber, myNumber2);
}

// --- ORNEK 3: Daire Alani Hesaplama ---
void ornek_daire_hesaplama() {
    // dairenin çevresini ve alanını bulan program
    // 1-ihtiyacımız olan variables bul ve tanımla
    // 2-variables type bul
    // 3-formülü tanımla alan=pi*r*r çevre=2*pi*r
    // 4-kullanıcıdan verileri al
    // 5-işlem yap
    // 6-çıktı ver

    float r, circumference, area;
    const float PI = 3.1415;
    // const float: değeri sonradan değiştirilmeyen ondalıklı sayı değişkenidir

    printf("enter the radius of the circle:");
    scanf("%f", &r);

    circumference = 2 * PI * r;
    area = PI * r * r;

    printf("area of the circle is %f\n", area);
    printf("circumference of the circle is %f", circumference);
}