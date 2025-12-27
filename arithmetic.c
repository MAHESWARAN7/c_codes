#include<stdio.h>
int main() {
    
    int a = 10;
    int b = 20;
    int sum = a + b;
    int diff = b - a;
    int prod = a * b;
    float quot = (float)b / a;
    int c = 50;
    int d=2;
    a=a+5; // a = 15
    b+=5; // b = 25
    c-=10; // c = 40
    d *= a; // d = 200
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);

    return 0;

}