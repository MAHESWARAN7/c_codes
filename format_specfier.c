#include<stdio.h>
int main() {
    
    int num = 255;
    int numa = 1000;
    int numb = -10000;
    int numc = 100000;
    float fnum = 123.45456;
    char ch = 'A';
    char str[] = "Hello, World!";


    // Using different format specifiers
    
    
    printf("Integer: %d\n", num);               // %d for integer
    printf("%4d\n%4d\n%4d\n", numa, numb, numc); // %4d for width of 4
    printf("%+d\n%+d\n%+d\n%+d\n", numa,numb,numc);
    printf("Hexadecimal: %x\n", num);           // %x for hexadecimal
    printf("Floating point: %.2f\n", fnum);     // %.2f for float with 2 decimal places
    printf("Character: %c\n", ch);              // %c for character
    printf("String: %s\n", str);                 // %s for string

    return 0;
}
