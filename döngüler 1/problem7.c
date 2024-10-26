#include <stdio.h>  // Standart giriş-çıkış kütüphanesi. printf() ve scanf() fonksiyonlarını kullanmamızı sağlar.

int main() {  // Programın ana fonksiyonu, buradan başlar.


    float d, sayi, ort = 0, toplam = 0;  // 'd' tek tek alınacak sayıyı, 'sayi' kaç tane sayının ortalamasını alacağımızı, 'ort' ortalamayı ve 'toplam' toplamı tutacak değişkenler.

    // Kullanıcıdan kaç sayının ortalamasını bulmak istediğini sorar.

    printf("kaç tane sayının ortalamasını bulmak istiyorsunuz : ");  

    // Kullanıcının girdiği sayıyı 'sayi' değişkenine atar. %f float formatıdır.

    scanf("%f", &sayi);  

    printf("\n");  // Bir satır boşluk bırakır.

    // For döngüsü: i değişkeni 1'den başlar, 'sayi' kadar döngü devam eder.
    for(int i = 1; i <= sayi; i++) {

        // Kullanıcıdan sayıyı girmesi için mesaj gösterir.

        printf("sayı %d : ", i);  

        // Kullanıcının girdiği sayıyı 'd' değişkenine atar.

        scanf("%f", &d);  

        printf("\n");  // Bir satır boşluk bırakır.

        // 'd' değerini 'toplam' değişkenine ekler.

        toplam = toplam + d;  
    }

    // 'toplam' değerini 'sayi' değerine bölerek ortalamayı hesaplar.

    ort = toplam / sayi;  

    // Hesaplanan ortalamayı ekrana yazdırır. %f float formatında sonucu gösterir.

    printf("girdiğiniz sayıların ortalaması : %f", ort); // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.


    return 0;  
}
