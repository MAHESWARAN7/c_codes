#include <stdio.h>
#include<stdlib.h>
#include<time.h>
/* 
int main(){
   // srand(time(NULL));
    
    int min = 10;
    int max = 20;

int random1 = (rand() % (max-min) + 1 )+min;
    printf("%d",random1);
}

*/

int main(){
    srand(time(0));
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;

    int answer = (rand() % (max - min+1)) +min;

    printf("____ Number guessing game _____\n");
    

    do{
        printf("guess # between %d -%d : ", min,max);
        scanf("%d", &guess);
        tries++;

        if(guess < answer){
            printf("too low \n");
        }
        else if(guess > answer){
             printf("too high \n");}

        else{
            printf("correct \n");
        }

        
    }while (guess != answer);
    printf("the answer is %d \n",answer);
    printf("# of tries : %d \n", tries);

}