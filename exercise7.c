#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;
    double average;
    
    printf("Enter values (enter 0 to stop):\n");
    
    while (1) {
        printf("Enter number: ");
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        sum += num;
        count++;
    }
    
    if (count > 0) {
        average = sum / (double)count;
        printf("\nCount: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("\nNo numbers were entered.\n");
    }
    
    return 0;
}
