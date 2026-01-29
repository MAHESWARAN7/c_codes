#include <stdio.h>
#include <string.h>

int main (){
    char name[90]="";
    printf("enter ur name : ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]= '\0';
    
    while(strlen(name)==0){
        printf("enter your name : ");
       fgets(name,sizeof(name),stdin);
       name[strlen(name)-1]= '\0';

    }
    printf("hello %s ", name);

}