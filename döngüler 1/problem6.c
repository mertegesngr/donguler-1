#include <stdio.h>  // Standart giriş-çıkış kütüphanesi. printf() ve scanf() fonksiyonlarını kullanmamızı sağlar.

int main() {  // Programın ana fonksiyonu, buradan başlar.

    int sayi;  // Kullanıcının gireceği tam sayıyı tutacak değişken.

    int toplam = 0;  // Çift sayıların toplamını tutacak değişken. Başlangıç değeri 0'dır.

    // Kullanıcıdan bir tam sayı girmesini isteyen mesaj.

    printf("bir sayı giriniz : ");  
    
    // Kullanıcının girdiği tam sayıyı `sayi` değişkenine atar. %d tam sayı formatıdır.

    scanf("%d", &sayi);  
    


    printf("\n");  // Bir satır boşluk bırakır.



    // For döngüsü: i değişkeni 0'dan başlar, i <= sayi olduğu sürece döngü devam eder. Her adımda i 1 artırılır.
    for(int i = 0; i <= sayi; i++) {

        // Eğer i çift bir sayı ise
        if(i % 2 == 0) {

            // i'yi toplam değişkenine ekler. 
            toplam = i + toplam; 
        }
    }

    // Giriş yapılan sayı ile 0 arasındaki çift sayıların toplamını ekrana yazdırır. %d tam sayı formatıdır.

    printf("girdiğiniz sayı ile 0 arasındaki çift sayıların toplamı = %d ", toplam); 

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}
