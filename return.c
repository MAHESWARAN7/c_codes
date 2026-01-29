/*
#include <stdio.h>
int cube(int num){
   return num* num*num;
}

int main (){
    int a = cube (2);
    printf("%d",a);
} 
   


   #include<stdio.h>
   #include<stdbool.h>
   bool agecheck(int age ){
    if(age >= 18){
        return true;
    }
    else{
        return false;

    }
   }

   int main(){
    int age = 19;
    if(agecheck(age)){
        printf("accept access");
    }
    else{
        printf("access denide");
    }
   }
*/




#include<stdio.h>
int maxoftwo(int x,int y){
    if (x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int max =maxoftwo( 2,3);
    printf("%d", max);
    return 0;
}
