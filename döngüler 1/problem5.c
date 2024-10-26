#include <stdio.h>  // Standart giriş-çıkış kütüphanesi. printf() fonksiyonunu kullanmamızı sağlar.

int main() {  // Programın ana fonksiyonu, buradan başlar.




    int toplam = 0;  // 'toplam' değişkeni, 1'den 10'a kadar olan sayıların toplamını tutmak için kullanılır. Başlangıç değeri 0'dır.






    // for döngüsü: i değişkeni 1'den başlar, i <= 10 olduğu sürece devam eder. Her adımda i 1 artırılır.
    for (int i = 1; i <= 10; i++) {


        // 'toplam' değişkenine o anki 'i' değeri eklenir. Yani her iterasyonda 'toplam' bir önceki toplam ile 'i' değerini toplar.

        toplam = toplam + i;


    }

    // 1'den 10'a kadar olan sayıların toplamını ekrana yazdırır. %d tam sayı formatıdır.
    printf("1 den 10 a kadar olan sayıların toplamı : %d", toplam);

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}
