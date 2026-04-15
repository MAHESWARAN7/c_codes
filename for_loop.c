#include<stdio.h>
//#include<unistd.h> //linux

/* int main (){
    for (int i =10; i >= 0; i--){
        sleep(1);
        printf("%d \n", i);
    }
    printf("happy new year");

}  */




/*
int main ()
{
    for (int i = 1; i<=10; i++){
        if(i == 4){
            continue ; // (skip the current cycle of the loop)skip the number 4 
        }
        else if( i == 6){
            break ;    // (breaks out of a loop )skip the number 6
        }
        printf("%d\n",i);
        }
}
*/



int main (){
    for (int i =1 ; i<=10; i++){
        for(int j =1; j<= 10; j++){
            printf("%3d ", i*j);
        }
        printf("\n" );

    }

}

       
