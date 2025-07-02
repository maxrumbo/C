// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>

int main(int _argc, char **_argv) {
    int n;
    scanf("%d", &n);

    int nilai[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }

    int min = nilai[0];
    int max = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] < min) {
            min = nilai[i];
        }
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }

    printf("%d\n", min);
    printf("%d\n", max);

    double min_avg = (nilai[0] + nilai[1]) / 2.0;
    for (int i = 1; i < n - 1; i++) {
        double avg = (nilai[i] + nilai[i + 1]) / 2.0;
        if (avg < min_avg) {
            min_avg = avg;
        }
    }

    printf("%.2f\n", min_avg);

    return 0;
}