#include <stdio.h>

int main() {
    int i;

    printf("Using for loop:\n");
    for (i = 1; i <= 30; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Using while loop:\n");
    i = 1;
    while (i <= 30) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("Using do...while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 30);
    printf("\n");

    return 0;
}
