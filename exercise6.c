#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    double average;
    
    printf("Enter 10 numbers:\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    
    average = sum / 10.0;
    
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);
    
    return 0;
}
