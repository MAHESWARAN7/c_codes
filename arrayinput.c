#include<stdio.h>
#include<string.h>

int main(){
    char items[5][30]={0};



    for(int i=0; i<5;i++){
        printf("enter the list of items");
        fgets(items[i],sizeof(items[0]), stdin);
        items[i][strlen(items[i])-1]='\0';


        for(int i =0 ; i < 5; )
printf("itemes are -- \n %s \n",name[i]);
    }
    


}