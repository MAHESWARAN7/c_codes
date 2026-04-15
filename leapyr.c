#include <stdio.h>
int main(){
    int y  ;
    scanf("%d", &y);
    if (y%4==0){
        if(y%100==0){
            if(y%400==0){
                 return printf("leap year");
            }
            else printf("not leap year");
        }else return 1;
    }

}