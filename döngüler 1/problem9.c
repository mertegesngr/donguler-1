#include <stdio.h>   // Standart giriş-çıkış fonksiyonları için gerekli kütüphane.
#include <stdlib.h>  // Rastgele sayı üretimi ve diğer genel amaçlı fonksiyonlar için kütüphane.
#include <time.h>    // Zamanla ilgili fonksiyonlar için gerekli kütüphane.

int main() {
    int tahmin, rastgele_sayi;  // Kullanıcının tahmini ve rastgele üretilen sayıyı tutacak değişkenler.
    
    // Rastgele sayı üretimini başlatmak için zaman değerini kullanır.
    srand(time(NULL));
    // 1 ile 100 arasında rastgele bir sayı oluşturur.
    rastgele_sayi = rand() % 100 + 1; 

    // Kullanıcıya bilgi verir.
    printf("1 ile 100 arasında bir sayı tuttum tahmin et !!!.\n");
    
    // Kullanıcıdan tahmin alana kadar döngü devam eder.
    do {
        printf("Tahmininizi girin: ");  // Kullanıcıdan tahmin girmesini ister.
        scanf("%d", &tahmin);  // Kullanıcının girdiği tahmini alır.
        
        // Tahmin, rastgele sayıya göre karşılaştırılır.
        if (tahmin < rastgele_sayi) {
            printf("Tahmininiz daha küçük. Tekrar deneyin...\n");  // Tahmin küçükse kullanıcıyı bilgilendirir.
        } else if (tahmin > rastgele_sayi) {
            printf("Tahmininiz daha büyük. Tekrar deneyin...\n");  // Tahmin büyükse kullanıcıyı bilgilendirir.
        } else {
            printf("Tebrikler! Doğru tahmin ettiniz :))))\n");  // Doğru tahmin yapılırsa kullanıcıyı tebrik eder.
        }
    } while (tahmin != rastgele_sayi);  // Kullanıcının doğru tahmin etmesi için döngü devam eder.

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}

