// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>

int main(int _argc, char **_argv) {
    int x;
    const char *bulan[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    scanf("%d", &x);

    if (x < 1 || x > 12) {
        return 1;
    }

    printf("%s\n", bulan[x - 1]);

    if (x == 11) {
        printf("%s\n", bulan[11]);
        printf("New year\n");
        printf("%s\n", bulan[0]);
    } else if (x == 12) {
        printf("New year\n");
        printf("%s\n", bulan[0]);
        printf("%s\n", bulan[1]);
    } else {
        printf("%s\n", bulan[x - 1 + 1]);
        printf("%s\n", bulan[x - 1 + 2]);
    }

    return 0;
}