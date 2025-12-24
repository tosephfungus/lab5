#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        sum += i * i;
    }
    
    printf("Sum of squares of numbers from 1 to 10: %d\n", sum);
    
    return 0;
}
