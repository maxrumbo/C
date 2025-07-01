// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    // Define three fields of type int: length, width and height
    int length;
    int width;
    int height;
};

typedef struct box box;

// Return the volume of the box
int get_volume(box b) {
    return b.length * b.width * b.height;
}

// Return 1 if the box's height is strictly less than MAX_HEIGHT, 0 otherwise
int is_lower_than_max_height(box b) {
    return b.height < MAX_HEIGHT;
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // Baca dan proses langsung tanpa malloc
    for (int i = 0; i < n; i++) {
        box b;
        scanf("%d %d %d", &b.length, &b.width, &b.height);
        if (is_lower_than_max_height(b)) {
            printf("%d\n", get_volume(b));
        }
    }

    return 0;
}
