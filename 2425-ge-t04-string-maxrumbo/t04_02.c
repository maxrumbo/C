// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

typedef struct {
    char str[MAX_STRING_LENGTH + 1]; 
} Input;

int main() {
    Input input;
    int length;

    if (fgets(input.str, sizeof(input.str), stdin) == NULL) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    input.str[strcspn(input.str, "\n")] = 0;

    length = strlen(input.str);

    for (int i = 0; i < length; i++) {
        printf("%03d", (int)input.str[i]);
    }

    printf("013\n");

    return 0;
}
