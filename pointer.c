#include<stdio.h>
int main(){
    int n=10;
    char ch='A';
    void* ptr = &n;
    printf("%d \n`", *(int*)ptr); //(int*) - typecasting 
}