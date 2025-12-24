#include <stdio.h>

int main() {
    printf("Numbers divisible by both 3 and 5 between 20 and 100:\n");
    
    for (int i = 20; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
