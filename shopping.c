#include <stdio.h>
#include <string.h>
int main (){

char items[50]="\0";
float price=0;
int quantity=0;
char currency ='$';
float total =0;

printf("items name :");
fgets(items,sizeof(items), stdin);
items[strcspn(items,"\n")]= '\0';

printf("item price : ");
scanf ("%f", &price);

printf("items quantity :");
scanf("%d", &quantity );


total = price * quantity ;
printf("your total is : %c%.2f ", currency,total);
 printf("\n u had brought %d %s", quantity, items);

return 0;
}