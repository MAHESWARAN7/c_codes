#include <stdio.h>
int main (){
    int sample [5]= {0};
    char vowels []= {'a','e','i','o','u'};
   // printf("%d\n",phno[1],phno[2] );
for(int i ; i <5 ; i++){
    printf("enter sample nos : ");
    scanf("%d", &sample[i]);
}
int size = sizeof(sample) / sizeof(sample[0]);
   for(int i ; i < size; i++) {
    printf("%d\t", sample[i]);
    //printf("%c\n", vowels[i]);
    
   }
   printf("size of array %d\n", size); //mahes
    



}