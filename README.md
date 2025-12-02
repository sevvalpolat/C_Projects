# C Programlama Ders Notlarım

Bu depo, C programlama öğrenme sürecimdeki çalışmalarımı ve notlarımı içerir.

## Escape Sequences (Kaçış Karakterleri)
* `\n` -> **Yeni satır**: İmleci bir sonraki satırın başına konumlandırır.
* `\b` -> **Backspace**: Geri silme tuşunun işlevi gerçekleştirilir.
* `\t` -> **Tab**: Yatay sekme, imleci bir sonraki sekme durağına hareket ettirir.
* `\"` -> **Çift tırnak**: Ekrana çift tırnak işaretini basar.
* `\\` -> **Ters bölü**: Ekrana ters bölü işaretini basar.

## C Data Types (Veri Tipleri)
| Tip | Boyut | Açıklama |
| :--- | :---: | :--- |
| `char` | 1 byte | Tek bir karakter/harf/sayı veya ASCII değerini saklar. |
| `int` | 4 byte | Tüm tam sayılar (integer). |
| `float` | 4 byte | Ondalık sayıları saklar (7 basamak hassasiyet). |
| `double` | 8 byte | Ondalık sayıları saklar (16 basamak hassasiyet). |

## C Variables (Değişken Kuralları)
1. İsimler harf, rakam ve alt çizgi (`_`) içerebilir.
2. İsimler bir harf veya alt çizgi ile başlamalıdır (**Rakamla başlayamaz**).
3. Adlar büyük/küçük harfe duyarlıdır (`myName` ve `myname` farklıdır).

## Format Specifiers (Biçim Belirleyiciler)
* `%c` -> `char` veri tipini yazdırır.
* `%d` -> `int` veri tipini yazdırır.
* `%ld` -> `long int` veri tipini yazdırır.
* `%f` -> `float` veri tipini yazdırır.
* `%lf` -> `double` veri tipini yazdırır.
* `%s` -> Metinsel ifadeleri (string) yazdırır.
* `%u` -> `unsigned int` veri tipini yazdırır.

## Function Return Types: `int` vs `void`

C dilinde fonksiyonların çalışma prensibi ve geriye dönüş değerleri arasındaki temel farklar:



| Özellik | `int` (Integer) | `void` (Hükümsüz/Boş) |
| :--- | :--- | :--- |
| **Tanım** | Geriye bir tam sayı döndüren fonksiyon. | Geriye değer döndürmeyen fonksiyon. |
| **Zorunluluk** | `return` ifadesi **zorunludur**. | `return` ifadesi **kullanılmaz**. |
| **Kullanım Yeri** | Hesaplama sonuçları, Hata kodları (`main`). | Ekrana yazdırma, işlem yapma, menü gösterme. |
| **Örnek** | `return 0;` veya `return sonuc;` | (Boş bırakılır) |

```c
/* --- KULLANIM ORNEGI --- */

// 1. VOID FONKSIYON (Is yapan iscidir, rapor vermez)
void selamla() {
    printf("Sistem baslatiliyor...\n");
    // Return yoktur, is bitince kapanir.
}

// 2. INT FONKSIYON (Yonetici, rapor verir)
int main() {
    selamla(); // Void fonksiyonu buradan cagirilir.
    
    // Isletim sistemine "0 hata ile bitti" raporu verilir.
    return 0; 
}
 ```   
--- 
    
## Input & Output Mantığı (printf & scanf Detayları)

C dilinde veri alma ve yazdırma işlemleri belirli kurallara dayanır.

### 1. printf (Çıktı Alma) Nasıl Çalışır?
`printf` fonksiyonu bir **"Boşluk Doldurma Oyunu"** gibi çalışır.

**Örnek:** `printf("Sehir: %s\n", myCity);`

* **Şablon (`"..."`)**: Ekrana basılacak ana cümledir.
* **Yer Tutucu (`%s`, `%d`)**: Değişkenin oturacağı koltuktur. Bilgisayar `%` işaretini görünce oraya dışarıdan bir veri geleceğini anlar.
* **Değişken (`myCity`)**: O koltuğa oturacak olan gerçek veridir.
* **Kaçış Karakteri (`\n`)**: "New Line". Enter tuşuna basılmış gibi imleci alt satıra indirir.


### 2. scanf ve Adres Operatörü (`&`)
`scanf`, kullanıcıdan alınan veriyi bellekteki (RAM) doğru kutuya teslim etmekle görevli bir kuryedir.

**Sembol:** `&`
**Teknik Adı:** Address-of Operator (Adres Operatörü)
**Günlük Adı:** Ampersand
**Görevi:** Bir değişkenin bellekteki tam konumunu (GPS koordinatını) verir.

**Neden `&` Kullanılır?**
* **`printf` (Okuyucu):** Sadece kutunun içindeki değeri okur, adresi bilmesine gerek yoktur.
* **`scanf` (Yazıcı):** Veriyi kutunun **içine koyacağı** için, o kutunun tam adresini (`&`) bilmek zorundadır.

**Çoklu Veri Alma Örneği:**
```c
// Kuryeye 2 paket verilir, 2 ayrı teslimat adresi (&) gerekir.
scanf("%f %f", &sayi1, &sayi2);
```
### Önemli İstisna (Stringler) :
*  Stringler ( Metin dizileri) , yapıları gereği zaten bir "başlangıç adresi"bildirdikleri için `scanf` ile kullanılırken başlarına `&` konulmaz.
Doğru:`scanf("%s",myCity);`
Yanlış:`scanf("%s",&myCity);`
---
### Diğer Notlarım
* [Markdown Kullanım Rehberim için buraya tıkla](MARKDOWN_NOTLARI.md)