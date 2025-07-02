// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>
#include <string.h>

typedef struct {
    char str[61];
} Input;

int main() {
    Input input;
    int i, len;

    fgets(input.str, sizeof(input.str), stdin);
    input.str[strcspn(input.str, "\n")] = 0;

    len = strlen(input.str);

    if (len >= 3 && len <= 60) {
        for (i = 0; i < len; i += 3) {
            int ascii = (input.str[i] - '0') * 100 + (input.str[i + 1] - '0') * 10 + (input.str[i + 2] - '0');
            printf("%c", ascii);
        }
    }

    printf("\n");

    return 0;
}