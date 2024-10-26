#include <stdio.h>  // Standart giriş-çıkış kütüphanesi. printf() ve scanf() fonksiyonlarını kullanmamızı sağlar.

int main(){  // Programın ana fonksiyonu, buradan başlar.

    int sayi;  // Kullanıcının gireceği tam sayıyı tutacak değişken.

    // Kullanıcıdan bir tam sayı girmesini isteyen mesaj.
    printf("bir tam sayı giriniz : ");  
    
    // Kullanıcının girdiği tam sayıyı `sayi` değişkenine atar. %d tam sayı formatıdır.
    scanf("%d", &sayi);  
    
    printf("\n");  // Bir satır boşluk bırakır.

    // For döngüsü: i değişkeni 2'den başlar, i <= sayi olduğu sürece döngü devam eder. Her adımda i 1 artırılır.
    for (int i = 2; i <= sayi; i++) {
        
        // i'nin mevcut değerini ekrana yazdırır. %d tam sayı formatıdır ve \n yeni bir satıra geçmeyi sağlar.
        printf("%d\n", i);  
    }

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}
