// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu
#include <stdio.h>

int main() {
    float nilai1, nilai2, nilai3, nilai4, nilai5, jumlah, rata_rata;

    scanf("%f %f %f %f %f", &nilai1, &nilai2, &nilai3, &nilai4, &nilai5);

    jumlah = nilai1 + nilai2 + nilai3 + nilai4 + nilai5;
    rata_rata = jumlah / 5.0;

    printf("Jumlah: %.3f\n", jumlah);
    printf("Rata-rata: %.3f\n", rata_rata);

    return 0;
}