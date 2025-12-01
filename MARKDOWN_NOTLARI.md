# Kendime Notlar: Markdown Kullanımı

Burada, bu dosyayı düzenlerken kullandığım komutları not aldım.

### 1. Başlıklar
Satır başına `#` koyarak yapılır.
* `# Başlık` -> Büyük
* `## Başlık` -> Orta
* `### Başlık` -> Küçük

### 2. Yazı Stilleri
* `**Kalın Yazı**` -> **Kalın Yazı**
* `*İtalik Yazı*` -> *İtalik Yazı*

### 3. Kod Bloğu
Kodları renkli göstermek için üç adet ters tırnak (backtick) kullanılır:
\`\`\`c
// Kodlar buraya
\`\`\`

### 4. Listeler
* `*` veya `-` işareti ile maddeleme yapılır.
* `1.` ile numaralı liste yapılır.

### 5. Tablo Yapımı
Tablolar, sütunları ayırmak için dik çizgi `|` ve başlıkları ayırmak için tire `-` kullanılarak yapılır.
*(İpucu: `|` işareti genelde `Alt Gr + -` veya `Alt Gr + <` tuşuyla yapılır).*

**Yazarken şuna benzer:**

\`\`\`text
| Ders | Not | Durum |
| --- | --- | --- |
| Fizik | 90 | Geçti |
| Kimya | 45 | Kaldı |
\`\`\`

**Görünümü ise şöyle olur:**

| Ders | Not | Durum |
| --- | --- | --- |
| Fizik | 90 | Geçti |
| Kimya | 45 | Kaldı |

### 6. Link Verme (Bağlantı Ekleme)
Başka sayfalara, dosyalara veya web sitelerine yönlendirme yapmak için köşeli parantez `[]` ve normal parantez `()` kullanılır.

**Formülü:**
`[Ekranda Görünecek Yazı](Gidilecek_Adres)`

**Örnekler:**
* `[Google'a Git](https://google.com)` -> Bir web sitesine link verir.
* `[Beni Oku Dosyası](README.md)` -> Proje içindeki başka bir dosyaya link verir.