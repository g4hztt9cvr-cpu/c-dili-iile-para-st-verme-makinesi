#include <stdio.h>

int main(void) {
    double odenecekTL, verilenTL;

    printf("Odenecek tutari girin (TL): ");
    scanf("%lf", &odenecekTL);

    printf("Verilen parayi girin (TL): ");
    scanf("%lf", &verilenTL);

    // Kuruş dönüşümü: Yuvarlama hatalarını önlemek için 0.5 eklenerek tamsayıya çevrilir
    int odenecekKurus = (int)(odenecekTL * 100.0 + 0.5);
    int verilenKurus  = (int)(verilenTL * 100.0 + 0.5);

    // Doğrudan matematiksel çıkarma (Toplam kuruş)
    int paraUstuKurus = verilenKurus - odenecekKurus;

    // Kuruşu TL ve Kuruş parçalarına ayırma
    int tlKismi = paraUstuKurus / 100;
    int kurusKismi = paraUstuKurus % 100;

    printf("\nVerilecek Para Ustu: %d TL %d Kurus\n", tlKismi, kurusKismi);

    return 0;
}
