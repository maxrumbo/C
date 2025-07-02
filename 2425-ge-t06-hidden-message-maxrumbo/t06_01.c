// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Npitupulu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nama[100];
    int bobot;
    int nilai;
} KomponenPenilaian;

void printKomponen(KomponenPenilaian komponen[], int k) {
    for (int i = 0; i < k; i++) {
        printf("%s;%d;%d\n", komponen[i].nama, komponen[i].bobot, komponen[i].nilai);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2 || (int)*argv[1] < '1' || (int)*argv[1] > '5') {
        printf("Invalid argument\n");
        return 1;
    }

    int k = (int)*argv[1] - '0';
    KomponenPenilaian komponen[k];

    for (int i = 0; i < k; i++) {
        scanf("%[^#]#%d#%d", komponen[i].nama, &komponen[i].bobot, &komponen[i].nilai);
        getchar(); 
    }

    printKomponen(komponen, k);

    float nilaiAkhir = 0;
    int totalBobot = 0;
    for (int i = 0; i < k; i++) {
        nilaiAkhir += (float)komponen[i].nilai * komponen[i].bobot;
        totalBobot += komponen[i].bobot;
    }

    nilaiAkhir = (float)nilaiAkhir / totalBobot;

    printf("%.1f\n", nilaiAkhir);

    if (nilaiAkhir >= 60.0) {
        printf("passed\n");
    } else {
        printf("failed\n");
    }

    return 0;
}
