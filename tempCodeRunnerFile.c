#include<stdio.h>

int first (int n){
    while(n>0){
        n/=10;

    }
    return n;
}
    

int main(){
int n;
scanf("%d", &n);
printf("%d",first(n));
}