#include <stdio.h>
#include <math.h>

int main() {
    int i;
    int sum;
    double dsum;
    int x;
    
    printf("a. Series: 1, 2, 3, ........., 100\n");
    printf("   ");
    sum = 0;
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\n   Sum: %d\n\n", sum);
    

    printf("b. Series: 2, 4, 6, ..............50\n");
    printf("   ");
    sum = 0;
    for (i = 2; i <= 50; i += 2) {
        printf("%d ", i);
        sum += i;
    }
    printf("\n   Sum: %d\n\n", sum);
    

    printf("c. Series: 1, 8, 27, 64,...........20th term\n");
    printf("   ");
    sum = 0;
    for (i = 1; i <= 20; i++) {
        printf("%d ", i*i*i);
        sum += i*i*i;
    }
    printf("\n   Sum: %d\n\n", sum);
    

    printf("d. Series: 1, 11, 111, 1111, ...... up to 5th terms\n");
    printf("   ");
    sum = 0;
    int term = 1;
    for (i = 1; i <= 5; i++) {
        printf("%d ", term);
        sum += term;
        term = term * 10 + 1;
    }
    printf("\n   Sum: %d\n\n", sum);
    

    printf("e. Series: 3, 9, 27,............ up to 10th terms\n");
    printf("   ");
    dsum = 0;
    for (i = 1; i <= 10; i++) {
        printf("%.0f ", pow(3, i));
        dsum += pow(3, i);
    }
    printf("\n   Sum: %.0f\n\n", dsum);
    

    printf("f. Series: (2x3)/5+ (4x5)/7+ (6x7)/9+ ..... up to 5 terms\n");
    printf("   ");
    dsum = 0;
    for (i = 1; i <= 5; i++) {
        double val = (double)(2*i * (2*i+1)) / (2*(2*i+1) + 1);
        printf("%.2f ", val);
        dsum += val;
    }
    printf("\n   Sum: %.2f\n\n", dsum);
    

    printf("g. Series: 1x3+ 3x5 + 5x7 + ......... up to 5 terms\n");
    printf("   ");
    sum = 0;
    for (i = 1; i <= 5; i++) {
        int prod = (2*i-1) * (2*i+1);
        printf("%d ", prod);
        sum += prod;
    }
    printf("\n   Sum: %d\n\n", sum);
    

    printf("h. Series: 11 x 1 + 23 x 3 + 15 x 5 + 17 x 7 ............ up to 5 terms\n");
    printf("   ");
    int arr[] = {11, 23, 15, 17, 19};
    sum = 0;
    for (i = 0; i < 5; i++) {
        int prod = arr[i] * (2*i+1);
        printf("%d ", prod);
        sum += prod;
    }
    printf("\n   Sum: %d\n\n", sum);
    
    
    printf("i. Enter value of x: ");
    scanf("%d", &x);
    printf("   Series: x + (x^2)/2 + (x^3)/3 + (x^4)/4  + (x^5)/5 ........... up to 5 terms\n");
    printf("   ");
    dsum = 0;
    for (i = 1; i <= 5; i++) {
        double val = pow(x, i) / i;
        printf("%.2f ", val);
        dsum += val;
    }
    printf("\n   Sum: %.2f\n\n", dsum);
    
    return 0;
}
