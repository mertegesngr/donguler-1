#include <stdio.h>  // Standart giriş-çıkış kütüphanesi. printf() ve scanf() fonksiyonunu kullanmamızı sağlar.

int main (){  // Programın ana fonksiyonu, buradan başlar.

    // for döngüsü: i değişkeni 1'den başlar, i <= 10 olduğu sürece döngü devam eder. Her adımda i 1 artırılır.
    for (int i = 1; i <= 10; i++) {
    
     // i'nin mevcut değerini ekrana yazdırır. %d tam sayı formatıdır, \n yeni satıra geçmeyi sağlar.
        printf("%d\n", i);
    }

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}
