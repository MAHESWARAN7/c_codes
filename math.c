#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define printl(format, ...) printf(format "\n", ##__VA_ARGS__) // it puts \n for all printl lines
int main(){


    int x = 2;
    int z = 3;
    int w = -10;
    float y = 3.590;
    float a,b,c,d,e,f,g,h,i,j;

a = sqrt(x);
b = pow(x,z);
c = round(y);
d = ceil(y);
e = floor(y);
f = sin(x);
g = cos(x);
h = tan(x);
i = log(x);
j = fabs(w);


printl("sqrt  of %d is %.2f", x, a);       // use printl for the above # define 
printl("%d power %d is %.2f", x, z, b);
printl("roundoff of  %.3f is %.2f", y, c);
printl("ceil value of %.2f is %.2f", y, d);
printl("floor value  of %.2f is %.2f", y, e);
printl("sin of %d is %.2f", x, f);
printl("cos of %d is %.2f", x, g);
printl("tan of %d is %.2f", x, h);
printl("log of %d is %.2f", x, i);
printl("absolute value of %d is %.2f", w, j);

return 0 ;

}