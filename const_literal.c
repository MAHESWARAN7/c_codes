#include <stdio.h>
int main (){
    #define b 2
    const int c = 4;
    int a = 5;
    printf("%d\n", a);
    a=b+c;
    printf("a= %d b= %d c= %d", a, b, c );
   
}