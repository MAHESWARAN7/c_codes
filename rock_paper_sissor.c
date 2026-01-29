#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userchoise();
int computerchoise();
void checkwinner(int userc , int computer);
int main(){
   
    srand(time(NULL));
    
    printf("_____rock paper sissor _____");

    int computer =computerchoise();
    int userc = userchoise();
    
    
    

    switch(userc){

        case 1:
        printf("u choose rock\n");
        break;
        case 2:
        printf("u choose papper\n");
        break;
        case 3:
        printf("u choose sissor\n");
        break;

      }

      switch(computer){

        case 1:
        printf("computer choose rock\n");
        break;
        case 2:
        printf("computer choose papper\n");
        break;
        case 3:
        printf("computer choose sissor\n");
        break;

      }
      checkwinner( userc , computer);

     


      //printf("%d", user);
     // printf("%d ",computer);
    
     
return 0;
}

int computerchoise(){
    
      return (rand()%3)+1;
      
     
}
int userchoise(){
    int user = 0;
    do {printf("enter choise\n");

         printf("1.rock \n ");
         printf("2.papper \n" );
         printf("3.sissor\n");
         printf("enter choice : ");
         scanf("%d",&user);

    }while(user< 1 || user >3);
    return user ;
}

 void checkwinner(int userc , int computer){
    if (userc == computer){

        printf("tie\n");
    }
    else if (userc == 1 && computer == 3 || userc == 3 && computer == 2 || userc == 2 && computer == 1){
        printf("YOU WIN\n");
    }
    else {
        printf("u loose\n");
    }
}