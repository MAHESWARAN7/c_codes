#include <stdio.h>
int main(){
    char a = '\0' ;
    printf("enter day's first letter M,T  ");
    scanf("%c",&a);
    switch(a){
        case 'T':
        printf("monday");
        break;

        case 'M':
        printf("tusesday ");
        break;

        default:
        printf("enter M-T only");
    }
}