#include<stdio.h>
int main() {
    
    int a = 10;
    int b = 20;
    int sum = a + b;
    int diff = b - a;
    int prod = a * b;
    float quot = (float)b / a;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);

    return 0;

}