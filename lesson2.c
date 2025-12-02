#include <stdio.h>

// --- ORNEK 1: Kare ve Kup Hesaplama (Formatlı Yazdırma) ---
void ornek_kare_kup_hesapla()
{
    float number1, number2, number3, number4;

    printf("Enter four numbers: ");
    // %f -> Float (ondalikli) sayi bekledigimizi belirtir.
    scanf("%f %f %f %f", &number1, &number2, &number3, &number4);

    // \t (Tab) -> Klavyedeki 'Tab' tusu gorevi gorur, imleci saga kaydirip hizalar.
    // \n (New Line) -> Yeni satira gecer.
    printf("Number:\t\tSquare:\t\tCube:\n");
    printf("-------\t\t-------\t\t-----\n"); // Excel gibi gorunmesi icin susleme cizgisi

    /* ONEMLI NOTLAR:
       1. %.2f -> Normalde %f virgulden sonra 6 hane gosterir (5.000000).
                  .2f yazarsak "Sadece 2 basamak goster" deriz (5.00).

       2. Tek Satirda Yazdirma -> 3 tane printf kullanmak yerine,
                  tek printf icinde sirasiyla degiskenleri yazabiliriz.
                  Sirasiyla: Sayi, Sayinin Karesi, Sayinin Kubu
    */
    printf("%.2f\t\t%.2f\t\t%.2f\n", number1, number1*number1, number1*number1*number1);
    printf("%.2f\t\t%.2f\t\t%.2f\n", number2, number2*number2, number2*number2*number2);
    printf("%.2f\t\t%.2f\t\t%.2f\n", number3, number3*number3, number3*number3*number3);
    printf("%.2f\t\t%.2f\t\t%.2f\n", number4, number4*number4, number4*number4*number4);
}

// --- ORNEK 2: String (Metin) Alma ---
void ornek_sehir_ismi()
{
    // char myCity[12] -> Bellekte 12 kutucukluk yer acar.
    // En fazla 11 harfli sehir yazilabilir (Son kutucuk bitis isareti icindir).
    char myCity[12];

    printf("Enter a city: ");

    // String (metin) alirken degiskenin basina '&' isareti konulmaz.
    // %s -> String (Metin) gelecegini belirtir.
    scanf("%s", myCity);

    printf("Your city is %s\n\n", myCity);
}

// --- ORNEK 3: Aritmetik Islemler ve Mod Alma ---
void ornek_aritmetik_islemler()
{
    int x, y, div, sum, sub, multi, mod;
    x = 6;
    y = 4;

    sum = x + y;       // Toplama
    sub = x - y;       // Cikarma
    multi = x * y;     // Carpma

    // Tam sayi bolmesi: Iki int bolunurse sonuc tam sayi cikar (virgul atilir).
    // 6 / 4 = 1.5 degil, 1 cikar.
    div = x / y;

    // Mod Alma (%): Bir sayinin bolumunden kalanini verir.
    // 6'nin 4'e bolumunden kalan 2'dir.
    mod = x % y;

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", multi);
    printf("Division (Integer): %d\n", div);
    printf("Modulo (Kalan): %d\n", mod);
}

// --- ORNEK 4: Artirma ve Azaltma Operatorleri (Increment/Decrement) ---
void ornek_increment_decrement() {
    int x, y, z;
    x = 5;
    y = 2;
    z = 9;

    x++; // x'i 1 artirir (x=6) -> Basit kullanimda ++x ile aynidir.
    ++y; // y'yi 1 artirir (y=3)
    z--; // z'yi 1 azaltir (z=8)

    printf("Baslangic -> x:%d, y:%d, z:%d\n\n", x, y, z);

    // POST-INCREMENT (Sonradan Artirma): y++
    // KURAL: "Once isi yap (atama), EN SON artir."
    x = y++;
    // 1. x = y (x, y'nin o anki degeri olan 3'u alir)
    // 2. y = y + 1 (y simdi 4 olur)
    printf("x = y++ sonrasi -> x:%d (eski y), y:%d (yeni y)\n", x, y);

    // PRE-INCREMENT (Onceden Artirma): ++y
    // KURAL: "Once artir, SONRA isi yap (atama)."
    x = ++y;
    // 1. y = y + 1 (y simdi 5 olur)
    // 2. x = y (x de 5 olur)
    printf("x = ++y sonrasi -> x:%d, y:%d\n", x, y);
}


// --- ORNEK 5: Artirma ve Azaltma Operatorleri (Quiz) ---
void ornek_increment_decrement_quiz()
{

    // --- BOLUM 1: Temel Fark (Once mi Sonra mi?) ---
    int skor = 10;
    int a, b;

    // a = skor++ -> (Post) Once a'ya 10'u ata, SONRA skoru artir (11 yap).
    a = skor++;

    // b = ++skor -> (Pre)  Once skoru artir (12 yap), SONRA b'ye ata.
    b = ++skor;

    printf("--- 1. Temel Mantik ---\n");
    printf("a (Eski deger) : %d\n", a);    // 10
    printf("b (Yeni deger) : %d\n", b);    // 12
    printf("skor (Son hal): %d\n\n", skor); // 12


    // --- BOLUM 2: Karma Islem ---
    int x = 5;
    int y = 8;
    int sonuc;

    // Soru: (x++) + (--y) + 10
    // Cozum:  5   +   7    + 10 = 22
    // Not: x islemde 5 kullanilir ama hafizada 6 olur. y once azalir 7 olur.
    sonuc = (x++) + (--y) + 10;

    printf("--- 2. Karma Islem ---\n");
    printf("Islem : (x++) + (--y) + 10\n");
    printf("x Son Hal : %d\n", x);      // 6
    printf("y Son Hal : %d\n", y);      // 7
    printf("Sonuc     : %d\n", sonuc);  // 22
}