#include <stdio.h>    // Standart giriş-çıkış fonksiyonları için gerekli kütüphane.
#include <locale.h>   // Yerelleştirme kütüphanesi, Türkçe karakterlerin doğru görüntülenmesini sağlar.

int main() {
    setlocale(LC_ALL, "Turkish");  // Programın yerel ayarlarını Türkçe olarak ayarlar.
    int x;  // Kullanıcının işlem seçimi için değişken.

    // Kullanıcıya yapılacak işlemleri gösteren mesaj.
    printf("Toplama için 1 \nÇıkartma için 2 \nÇarpma için 3 \nBölme için 4 ü \nÇıkış yapmak için 0 ı tuşlayın : \n");
    scanf("%d", &x);  // Kullanıcının işlem seçimini alır.
    printf("\n");  // Bir satır boşluk bırakır.

    do {
        switch (x) {
            case 1:  // Toplama işlemi
                int sayi1, sayi2, toplam;  // Toplama için gerekli değişkenler.
                printf("Hangi iki sayıyı toplamak istiyorsunuz : \n");
                
                printf("Sayı 1 = "); 
                scanf("%d", &sayi1);  // Kullanıcıdan 1. sayıyı alır.
                printf("\n"); 
                
                printf("Sayı 2 = "); 
                scanf("%d", &sayi2);  // Kullanıcıdan 2. sayıyı alır.
                printf("\n"); 

                toplam = sayi1 + sayi2;  // Sayıların toplamını hesaplar.

                printf("Sayıların toplamı = "); 
                printf("%d\n", toplam);  // Sonucu ekrana yazdırır.
                break;

            case 2:  // Çıkarma işlemi
                int sayi3, sayi4, cikart;  // Çıkarma için gerekli değişkenler.
                printf("Hangi iki sayıyı çıkartmak istiyorsunuz : \n");

                printf("Sayı 1 = "); 
                scanf("%d", &sayi3);  // Kullanıcıdan 1. sayıyı alır.
                printf("\n"); 
                
                printf("Sayı 2 = "); 
                scanf("%d", &sayi4);  // Kullanıcıdan 2. sayıyı alır.
                printf("\n"); 

                cikart = sayi3 - sayi4;  // Sayıların farkını hesaplar.

                printf("Sayıların çıkartımı = "); 
                printf("%d\n", cikart);  // Sonucu ekrana yazdırır.
                break;

            case 3:  // Çarpma işlemi
                int sayi5, sayi6, carpim;  // Çarpma için gerekli değişkenler.
                printf("Hangi iki sayıyı çarpmak istiyorsunuz : \n");

                printf("Sayı 1 = "); 
                scanf("%d", &sayi5);  // Kullanıcıdan 1. sayıyı alır.
                printf("\n"); 
                
                printf("Sayı 2 = "); 
                scanf("%d", &sayi6);  // Kullanıcıdan 2. sayıyı alır.
                printf("\n"); 

                carpim = sayi5 * sayi6;  // Sayıların çarpımını hesaplar.

                printf("Sayıların çarpımı = "); 
                printf("%d\n", carpim);  // Sonucu ekrana yazdırır.
                break;

            case 4:  // Bölme işlemi
                int sayi7, sayi8, bolen;  // Bölme için gerekli değişkenler.
                printf("Bölünen ve bölen giriniz istiyorsunuz : \n");

                printf("Sayı 1 = "); 
                scanf("%d", &sayi7);  // Kullanıcıdan bölünecek sayıyı alır.
                printf("\n"); 
                
                printf("Sayı 2 = "); 
                scanf("%d", &sayi8);  // Kullanıcıdan bölen sayıyı alır.
                printf("\n"); 

                // Bölme işlemi; sayi8 sıfırdan farklı olmalıdır.
                if (sayi8 != 0) {
                    bolen = sayi7 / sayi8;  // Sayıların bölümünü hesaplar.
                    printf("Sayıların bölümü = "); 
                    printf("%d\n", bolen);  // Sonucu ekrana yazdırır.
                } else {
                    printf("Hata: Bir sayıyı sıfıra bölemezsiniz!\n");  // Hata mesajı
                }
                break;

            case 0:  // Çıkış seçeneği
                printf("Programdan çıkış yapıldı.\n");  // Çıkış mesajı
                break;

            default:  // Geçersiz seçim
                printf("0 ile 4 arasında bir değer giriniz !!!!\n");  // Hata mesajı
                break;
        }

        // Kullanıcıdan yeni işlem seçimini al
        printf("Toplama için 1 \nÇıkartma için 2 \nÇarpma için 3 \nBölme için 4 ü \nÇıkış yapmak için 0 ı tuşlayın : \n");
        scanf("%d", &x);  // Yeni işlem seçimini al.
        printf("\n");  // Bir satır boşluk bırakır.

    } while (x != 0);  // Kullanıcı 0 seçeneğini seçene kadar döngü devam eder.

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.

}
