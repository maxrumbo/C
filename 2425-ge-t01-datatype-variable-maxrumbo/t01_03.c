// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>

int main() {
    int x, y, z;
    int hasil_shift;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    hasil_shift = x << y;
    int hasil_equality = (hasil_shift == z) ? 1 : 0;

    printf("%d\n", hasil_shift);
    printf("%d\n", hasil_equality);

    return 0;
}