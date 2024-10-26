#include <stdio.h>  // Standart giriş-çıkış kütüphanesi. printf() ve scanf() fonksiyonlarını kullanmamızı sağlar.

int main(){  // Programın ana fonksiyonu, buradan başlar.

    char isim[20];  // 20 karakterlik bir char dizisi (string) oluşturur, kullanıcının adını saklayacak.
    
    
    int tekrar;  // Kaç kez ismin tekrarlanacağını tutacak tam sayı değişkeni.

    // Kullanıcıdan ismini girmesini isteriz.
    printf("lütfen adınızı giriniz : ");  
    
    // Kullanıcının girdiği ismi `isim` değişkenine alır. %s string tipi veri formatı.
    scanf("%s", &isim);  
    
    printf("\n");  // Bir satır boşluk bırakmak için yeni satıra geçer.

    // Kullanıcıdan isminin kaç kez tekrarlanacağını girmesini ister.
    printf("adınızı kaç kez tekrar etmek istiyorsunuz : ");  
    
    // Kaç kez tekrarlanacağını `tekrar` değişkenine alır. %d tam sayı formatı.
    scanf("%d", &tekrar);  

    // For döngüsü: i 1'den başlar ve `tekrar` değerine kadar devam eder.
    for (int i = 1; i <= tekrar; i++) {
        // Kullanıcının adını her döngüde ekrana yazdırır.
        printf("%s \n", isim);  
    }

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}
