#include <stdio.h>


void me(char namee[],int agee,char addresss[]){
    printf("name : %s",namee);
    printf("age %d", agee);
    printf("address : %s", addresss);
}

int main(){
    char name[] = "mahes";
    int age = 19;
    char address[]= "no";
    me(name,age,address);
    return 0;
}