/*
 * Project: Electricity Bill Calculator with Inflation
 * Author: Sevval
 * Description: Calculates the total bill based on consumption and inflation rate.
 * (Tuketim ve enflasyon oranina gore toplam faturayi hesaplar.)
 */

#include <stdio.h>

void calculateElectricityBill()
{
    // --- DEGISKENLER (VARIABLES) ---

    // Fiyatlar ve oranlar ondalikli olabilir (float)
    float total_bill;                  // Toplam Fatura
    float previous_unit_price;         // Onceki Ayin Birim Fiyati
    float current_unit_price;          // Guncel (Zamli) Birim Fiyat

    float inflation_rate;              // Enflasyon Orani (%)
    float previous_subscription_fee;   // Onceki Abonelik Ucreti (Sabit ucret)
    float current_subscription_fee;    // Guncel Abonelik Ucreti

    // Sayac okumalari tam sayidir (int)
    int previous_reading;    // Onceki Sayac Degeri
    int current_reading;     // Guncel Sayac Degeri
    int total_consumption;   // Toplam Tuketim (Harcanan Elektrigin Miktari)

    printf("--- Electricity Bill Calculator (Elektrik Faturasi Hesaplayici) ---\n");

    // 1. GİRDİ: Enflasyon Oranı
    // (Ornegin %20 ise sadece 20 yazilacak)
    printf("Enter inflation rate %% (Enflasyon orani): ");
    scanf("%f", &inflation_rate);

    // 2. GİRDİ: Geçmiş Fiyat Bilgileri
    printf("Enter previous unit price (Eski birim fiyat): ");
    scanf("%f", &previous_unit_price);

    printf("Enter previous subscription fee (Eski abonelik ucreti): ");
    scanf("%f", &previous_subscription_fee);

    // 3. GİRDİ: Sayaç Okumaları
    printf("Enter previous meter reading (Eski sayac degeri): ");
    scanf("%d", &previous_reading);

    printf("Enter current meter reading (Yeni sayac degeri): ");
    scanf("%d", &current_reading);

    // ------------------------------------------------
    // HESAPLAMA MANTIGI (CALCULATION LOGIC)
    // ------------------------------------------------

    // Adim 1: Ne kadar harcadik? (Farkı bul)
    total_consumption = current_reading - previous_reading;

    // Adim 2: Fiyatlara zam yap (Enflasyon hesabi)
    // Mantık: Eski Fiyat * (1 + 0.20) -> %20 Artırır.
    current_unit_price = previous_unit_price * (1 + inflation_rate / 100);
    current_subscription_fee = previous_subscription_fee * (1 + inflation_rate / 100);

    // Adim 3: Toplam tutarı hesapla
    // Tutar = (Harcama * Yeni Fiyat) + Yeni Sabit Ücret
    total_bill = (total_consumption * current_unit_price) + current_subscription_fee;

    // ------------------------------------------------
    // CIKTI (OUTPUT)
    // ------------------------------------------------
    printf("----------------------------------------\n");
    printf("Total Consumption (Toplam Tuketim): %d units\n", total_consumption);
    printf("New Unit Price (Yeni Birim Fiyat) : %.2f\n", current_unit_price);
    printf("Total Bill Amount (Odenecek Tutar): %.2f\n", total_bill);
    printf("----------------------------------------\n");
}