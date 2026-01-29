#include <stdio.h>
int main(){

float kilograms =0.0f;
float pounds = 0.0f;
int choise = 0;


printf("kilogram <-> pounds\n");
printf("kilo to pounds (1)/\n");
printf("pounds to kilo(2)\n");
printf("enter your choise : ");
scanf("%d", &choise);

if (choise == 1){
    printf("enter weight in kilo : ");
    scanf("%f", &kilograms);
    pounds = kilograms * 2.20462;
    printf("%.2f kilos is equal to %.2f", kilograms,pounds);}

else if (choise == 2){
    printf("enter weight in pounds : ");
    scanf("%f", &pounds);
    kilograms = pounds / 2.20462;
    printf("%.2f pounds is equal to %.2f",pounds, kilograms );}


    else {
        printf("invalid");
    }






}
