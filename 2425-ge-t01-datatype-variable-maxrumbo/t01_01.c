// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>

int main() {
    int nilai_numerik;
    char karakter_ascii;
    int nilai_boolean;
    int nilai_non_negatif;
    float nilai_fraction;

    scanf("%d", &nilai_numerik);
    scanf(" %c", &karakter_ascii);
    scanf("%d", &nilai_boolean);
    scanf("%d", &nilai_non_negatif);
    scanf("%f", &nilai_fraction);

    printf("%d\n", nilai_numerik);
    printf("%c\n", karakter_ascii);
    printf("%d\n", nilai_boolean);
    printf("%d\n", nilai_non_negatif);
    printf("%.2f\n", nilai_fraction);

    return 0;
}

